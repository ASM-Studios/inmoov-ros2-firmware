#include <Arduino.h>

// This code works with an Arduino Mega 2560 R3
// Pin 1 (VCC) goes to 5V
// Pin 2 (Trig) goes to Digital(PWM-) 9
// Pin 3 (Echo) goes to Digital 8
// Pin 4 (Gnd) goes to GND

// The distance will be displayed in the serial monitor

#define TRIG_PIN 9
#define ECHO_PIN 8

void setup()
{
    Serial.begin(9600);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
}

void loop()
{
    // Ensure TRIG is LOW briefly
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    // Send a 10µs pulse to TRIG
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Mesure du temps du signal HIGH sur ECHO
    long duration = pulseIn(ECHO_PIN, HIGH);

    // Conversion en distance (cm)
    float distance = duration * 0.034 / 2;

    // Affichage sur le moniteur série
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(100);
}
