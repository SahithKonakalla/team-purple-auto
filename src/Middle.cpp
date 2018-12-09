#include "Middle.h"
#include "DriveForward.h"
#include "Turn.h"
#include "CVTurnTo.h"

Middle::Middle() {
	//AddSequential(new DriveForward(8*12));
	AddSequential(new DriveForward(10));
	AddSequential(new CVTurnTo());
}
