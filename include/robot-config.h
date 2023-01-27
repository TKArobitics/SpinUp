using namespace vex;

extern brain Brain;

// VEXcode devices

extern controller controller1;

extern motor spinnyMotor;
extern motor spinnyMotor2;
extern motor frontRightDrive;
extern motor frontLeftDrive;
extern motor backLeftDrive;
extern motor backRightDrive;
extern motor turnyMotor;
extern motor launcherR;
extern motor launcherL;
extern motor THELEVER;
extern motor intake;
extern motor port12;
extern motor port13;
extern motor port14;
extern motor port15;
extern motor port16;
extern motor port17;
extern motor port18;
extern motor port19;
extern motor port10;
extern motor port7;


extern gps GPSSensor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );