#include "LeftMiddle.h"
#include "Left.h"
#include "DriveForward.h"
#include "Turn.h"

LeftMiddle::LeftMiddle() {

	AddSequential(new Left());
	AddSequential(new Turn(18.43));
	AddSequential(new DriveForward(20));

}
