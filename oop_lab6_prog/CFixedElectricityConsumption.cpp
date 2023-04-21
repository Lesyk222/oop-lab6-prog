#include "CFixedElectricityConsumption.h"

CFixedElectricityConsumption::CFixedElectricityConsumption(double killowats) : CElectricityConsumption(killowats) {
	this->fixedPrice = 1.68;
}

double CFixedElectricityConsumption::calculateCost() const {
	return fixedPrice * countOfKillowats;
}

void CFixedElectricityConsumption::printName() const {
	cout << "CFixedElectricityConsumption" << endl;
}