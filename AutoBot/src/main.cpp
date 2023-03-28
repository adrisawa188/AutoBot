/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\parkrail211                                      */
/*    Created:      Tue Mar 28 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Flywheel             motor_group   8, 17
// MotorsR              motor_group   20, 16
// MotorsL              motor_group   19, 18
// Finger               motor         11
// Inertial             inertial      14
// Vision               vision        13
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "Vision.h"
#include "vex.h"

using namespace vex;

float map(float inputValue, float a1, float a2, float b1, float b2) {
  float output = b1 + (((inputValue - a1) * (b2 - b1)) / (a2 - a1));
  return output;
  // maps one value in a range to its corresponding value in another range
}
float VisionMid(vex::vision::signature sig) {
  Vision.takeSnapshot(sig);
  float output = map(Vision.largestObject.centerX, 0, 315, 100, -100);
  return output;
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
}