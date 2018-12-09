#ifndef CVTurnTo_H
#define CVTurnTo_H

#include <Commands/CommandGroup.h>

class CVTurnTo : public frc::CommandGroup {
public:
	CVTurnTo();
	double distance;
	double azimuth;
};

#endif  // CVTurnTo_H
