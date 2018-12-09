#include "CVTurnTo.h"
#include "Turn.h"
#include "DriveForward.h"
#include "GetCV.h"

CVTurnTo::CVTurnTo() {
	AddSequential(new GetCV(&distance, &azimuth));
	AddSequential(new Turn(azimuth));
	AddSequential(new DriveForward(distance));
}
