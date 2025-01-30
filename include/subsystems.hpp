#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/adi.hpp"
#include "pros/rotation.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(2);
 inline pros::Motor ladyBrown (19);
 inline pros::adi::DigitalOut clamper ('A');
 inline pros::Rotation rotation_sensor (14);
