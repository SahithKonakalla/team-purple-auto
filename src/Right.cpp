#include "Right.h"
#include "DriveForward.h"
#include "Turn.h"
#include "CVTurnTo.h"

Right::Right() {
	AddSequential(new Turn(18.43));
	AddSequential(new DriveForward(101));
	AddSequential(new CVTurnTo());
}
