#include "DriveForward.h"
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

DriveForward::DriveForward(double _setpoint) : setpoint(_setpoint){

	Requires(drive);

}

void DriveForward::Initialize() {
	drive->resetEncoders();
	drive->gyroReset();
}

// Called repeatedly when this Command is scheduled to run
void DriveForward::Execute() {
	drive->tankDrive("magic",0.3,0.3);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForward::IsFinished() {
	return fabs(position_avg - setpoint) < 3;
}

// Called once after isFinished returns true
void DriveForward::End() {
	std::cout << "error is finished and REACHED END " << fabs(position_avg - setpoint) << std::endl;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForward::Interrupted() {
}


