#include "LeftLeft.h"
#include "Left.h"
#include "DriveForward.h"
#include "Turn.h"

LeftLeft::LeftLeft() {

	AddSequential(new Left());
	AddSequential(new Turn(18.43));
	AddSequential(new Turn(-38.66));
	AddSequential(new DriveForward(25));

}
