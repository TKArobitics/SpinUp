#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller controller1; 
motor frontLeftDrive(PORT1);
motor turnyMotor(PORT15);
motor spinnyMotor(PORT16);
motor launcherR(PORT5);
motor launcherL(PORT6);
motor port7(PORT7);
motor frontRightDrive(PORT10);
motor port10(PORT2);
motor backLeftDrive(PORT11);
motor port12(PORT3);
motor port13(PORT4);
motor port14(PORT12);
motor port15(PORT13);
motor port16(PORT14);
motor port17(PORT17);
motor port18(PORT18);
motor port19(PORT19);
motor backRightDrive(PORT20);


motor THELEVER(PORT15);
gps GPSSensor = gps(PORT12, 0, 0, mm, 0);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}