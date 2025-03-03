#include <Arduino.h>
#include "distance_lidar.hpp"
#include "distance_sound.hpp"
#include "movement.hpp"

// This code works with an Arduino Mega 2560 R3

void setup()
{
    DistanceLidar::setup();
    DistanceSound::setup();
    Movement::setup();
}

void loop()
{
    DistanceLidar::loop();
    DistanceSound::loop();
    Movement::loop();
}
