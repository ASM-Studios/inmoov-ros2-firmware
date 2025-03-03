#include <Arduino.h>
#include <TFLI2C.h>
#include <Wire.h>

#include "distance_lidar.hpp"

#include <Servo.h>

// This code works with an Arduino Mega 2560 R3
// Pin 1 (in red) goes to 5V
// Pin 2 goes to SDA (top right)
// Pin 3 goes to SCL (top right)
// Pin 4 goes to GND
// Pin 5 goes to GND
// Pin 6 doesn't need to be connected

// The distance will be displayed in the serial monitor

TFLI2C lidar;

#define SERVO_PIN_LIDAR 2
Servo servoDistanceLidar;

void DistanceLidar::setup()
{
    Serial.begin(9600);
    Wire.begin(); // Initialize I2C bus
    Serial.println("TF-Luna I2C Mode Test");
    servoDistanceLidar.attach(SERVO_PIN_LIDAR);
    servoDistanceLidar.write(0);
}

void DistanceLidar::loop()
{
    int16_t distance; // Store distance in centimeters
    if (lidar.getData(distance, TFL_DEF_ADR))
    {
        Serial.print("Distance: ");
        Serial.print(String(distance));
        Serial.println(" cm");
        servoDistanceLidar.write(distance);
    }
    else
    {
        Serial.println("\nError");
        lidar.printStatus();
        Serial.println("\n");
    }
    delay(5);
}
