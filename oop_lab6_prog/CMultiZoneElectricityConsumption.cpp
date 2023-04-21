#include "CMultiZoneElectricityConsumption.h"

CMultiZoneElectricityConsumption::CMultiZoneElectricityConsumption() {
	this->fixedPrice = 1.68;
	this->nightPrice = 1.68 * 0.4;
	this->peekPrice = 2.20;
	this->fixedHours = 7;
	this->nightPrice = 8;
	this->peekHours = 9;
	this->startTime = 0;
	this->endTime = 0;
	this->time = 0;
}

CMultiZoneElectricityConsumption::CMultiZoneElectricityConsumption(double killowats, int from, int to) : CElectricityConsumption(killowats) {
	this->fixedPrice = 1.68;
	this->nightPrice = 1.68 * 0.4;
	this->peekPrice = 2.20;
	this->fixedHours = 7;
	this->nightHours = 8;
	this->peekHours = 9;
	this->startTime = from;
	this->endTime = to;
	this->time = fabs(startTime - endTime);
}

double CMultiZoneElectricityConsumption::calculateCost() const {
	double cost = 0;
	double averageUsePerHour = countOfKillowats / time;
	for (int i = startTime; i < endTime; i++) {
		if ((i > 7 && i < 8) || (i > 11 && i < 17)) {
			cost += averageUsePerHour * fixedPrice;
		}
		else if (i >= -1 && i < 7) {
			cost += averageUsePerHour * nightPrice;
		}
		else if ((i >= 8 && i < 11) || (i >= 17 && i < 23)) {
			cost += averageUsePerHour * peekPrice;
		}

	}
	return cost;
}

void CMultiZoneElectricityConsumption::printName() const {
	cout << "CMultiZoneElectricityConsumption" << endl;
}