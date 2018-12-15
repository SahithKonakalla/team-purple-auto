#include "LeftRight.h"

LeftRight::LeftRight() {
	AddSequential(new Left());
	AddSequential(new Turn(18.43));
	AddSequential(new Turn(38.66));
	AddSequential(new DriveForward(25));
}
