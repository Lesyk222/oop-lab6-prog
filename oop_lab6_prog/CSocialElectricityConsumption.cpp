#include "CSocialElectricityConsumption.h"

CSocialElectricityConsumption::CSocialElectricityConsumption(double killowats) : CElectricityConsumption(killowats) {
	this->fixedPrice = 1.68;
	this->socialPrice = 0.90;
	this->limit = 100;
}

double CSocialElectricityConsumption::calculateCost() const {
	if (countOfKillowats < limit) {
		return socialPrice * countOfKillowats;
	}
	else {
		return fixedPrice * countOfKillowats;
	}
}

void CSocialElectricityConsumption::printName() const {
	cout << "CSocialElectricityConsumption" << endl;
}