#pragma once

#include "CElectricityConsumption.h"
#include "CTariffs.h"
#include <cmath>

class CMultiZoneElectricityConsumption : public CElectricityConsumption, public CTariffs
{
 private:
	int fixedHours, nightHours, peekHours, startTime, endTime, time;
 public:
	 CMultiZoneElectricityConsumption();
	 CMultiZoneElectricityConsumption(double killowats, int from, int to);

	 double calculateCost() const;
	 void printName() const;
};

