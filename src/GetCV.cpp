#include "GetCV.h"

#include "Utilities/NetworkTablesInterface.h"



GetCV::GetCV(double* distance, double* azimuth) {

	mDistance = distance;

	mAzimuth = azimuth;

	Initialize();

}



void GetCV::Initialize() {

	finished = false;



	// Give temporary values in case CV cannot see anything

	*mDistance = 39;

	*mAzimuth = 0;



	// Set 3 second timeout, in case CV doesn't see

	SetTimeout(3);

}



void GetCV::Execute() {

	if (NetworkTablesInterface::getDistance() != -1.0) { // Wait Until Gear is Found

		*mDistance = NetworkTablesInterface::getDistance() * 0.393701; // Convert meters to inches

		*mAzimuth = -NetworkTablesInterface::getAzimuth();



		std::cout << "CV Distance:\t" << *mDistance << std::endl;

		std::cout << "CV Azimuth:\t" << *mAzimuth << std::endl;



		finished = true;

	}

}



bool GetCV::IsFinished() {

	return finished || IsTimedOut();

}



void GetCV::End() {



}



void GetCV::Interrupted() {

	End();

}
