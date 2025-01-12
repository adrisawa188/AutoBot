using namespace vex;

extern brain Brain;

using signature = vision::signature;

// VEXcode devices
extern motor_group Flywheel;
extern motor_group MotorsR;
extern motor_group MotorsL;
extern motor Finger;
extern inertial Inertial;
extern signature Vision__GOAL;
extern signature Vision__SIG_2;
extern signature Vision__SIG_3;
extern signature Vision__SIG_4;
extern signature Vision__SIG_5;
extern signature Vision__SIG_6;
extern signature Vision__SIG_7;
extern vision Vision;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );