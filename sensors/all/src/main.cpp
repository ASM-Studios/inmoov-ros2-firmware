#include <Arduino.h>
#include "lidar.hpp"
#include "sonar.hpp"
#include "movement.hpp"

// This code works with an Arduino Mega 2560 R3

void setup()
{
    Lidar::setup();
    Sonar::setup();
    Movement::setup();
}

void loop()
{
    Lidar::loop();
    Sonar::loop();
    Movement::loop();
}
