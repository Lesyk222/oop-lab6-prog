#pragma once

#include "CElectricityConsumption.h"

class CFixedElectricityConsumption : public CElectricityConsumption
{
 private:
	 double fixedPrice;
 public:
	 CFixedElectricityConsumption(double killowats);

	 double calculateCost() const;
	 void printName() const;
};