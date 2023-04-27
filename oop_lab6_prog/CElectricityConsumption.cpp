#include "CElectricityConsumption.h"

CElectricityConsumption::CElectricityConsumption(double killowats) {
	this->countOfKillowats = killowats;
}

CElectricityConsumption::CElectricityConsumption() {
	this->countOfKillowats = 0;
}

double CElectricityConsumption::getKillowats() const {
	return countOfKillowats;
}

void CElectricityConsumption::printName() const{
	cout << "CElectricityConsumption" << endl;
}