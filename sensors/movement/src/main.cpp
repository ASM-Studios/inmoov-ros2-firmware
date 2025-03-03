#include <Arduino.h>

// This code works with an Arduino Mega 2560 R3
// Pin 1 goes to 5V
// Pin 2 goes to Digital(PWM-) 10
// Pin 3 goes to GND

// When motion is detected:
// - The LED on the board (L) will light up
// - The serial monitor will display "Motion detected!"

#define SENSOR_PIN 10
#define LED_PIN 13

void setup()
{
    pinMode(LED_PIN, OUTPUT);
    pinMode(SENSOR_PIN, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int sensorState = digitalRead(SENSOR_PIN);

    if (sensorState == HIGH)
    {
        digitalWrite(LED_PIN, HIGH);
        Serial.println("Motion detected!");
    }
    else
    {
        digitalWrite(LED_PIN, LOW);
        Serial.println("No motion.");
    }

    delay(50);
}
