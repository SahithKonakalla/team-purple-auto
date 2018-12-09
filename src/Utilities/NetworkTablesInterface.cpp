#include "NetworkTablesInterface.h"


double NetworkTablesInterface::getDistance() {

	return NetworkTable::GetTable("cv")->GetNumber("distance", -1.0);

}



double NetworkTablesInterface::getAltitude() {

	return NetworkTable::GetTable("cv")->GetNumber("altitude", -1.0);

}



double NetworkTablesInterface::getAzimuth() {

	return NetworkTable::GetTable("cv")->GetNumber("azimuth", -1.0);

}
