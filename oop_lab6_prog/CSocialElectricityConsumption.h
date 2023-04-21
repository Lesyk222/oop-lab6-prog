#pragma once

#include "CElectricityConsumption.h"

class CSocialElectricityConsumption : public CElectricityConsumption
{
 private:
	 double fixedPrice;
	 double socialPrice;
	 int limit;
 public:
	 CSocialElectricityConsumption(double killowats);

	 double calculateCost() const;
	 void printName() const;
};

