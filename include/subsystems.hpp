#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"


extern Drive chassis;

// Your motors, sensors, etc. should go here.  Below are examples

 inline pros::Motor intake(-4);
 inline pros::Motor hooks(-9);
 inline pros::adi::DigitalOut mogo('A');

 


// inline pros::adi::DigitalIn limit_switch('A');