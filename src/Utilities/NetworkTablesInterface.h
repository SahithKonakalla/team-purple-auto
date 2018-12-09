#ifndef UTILITIES_NETWORKTABLESINTERFACE_H_

#define UTILITIES_NETWORKTABLESINTERFACE_H_



#include "NetworkTables/NetworkTable.h"



class NetworkTablesInterface {

public:

	//NetworkTablesInterface(); NOT REQUIRED

	//virtual ~NetworkTablesInterface(); NOT REQUIRED

	static double getDistance(); //gives the distance to the gear

	static double getAltitude(); //gives the altitude for the gear

	static double getAzimuth(); //gives the azimuth for the gear


};



#endif /* UTILITIES_NETWORKTABLESINTERFACE_H_ */
