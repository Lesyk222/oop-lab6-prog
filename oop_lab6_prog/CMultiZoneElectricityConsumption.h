#pragma once

#include "CElectricityConsumption.h"
#include <cmath>

class CMultiZoneElectricityConsumption : public CElectricityConsumption
{
 private:
	double fixedPrice, nightPrice, peekPrice;
	int fixedHours, nightHours, peekHours, startTime, endTime, time;
 public:
	 CMultiZoneElectricityConsumption();
	 CMultiZoneElectricityConsumption(double killowats, int from, int to);

	 double calculateCost() const;
	 void printName() const;
};

