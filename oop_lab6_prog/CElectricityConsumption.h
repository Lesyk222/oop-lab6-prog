#pragma once

#include <iostream>

using namespace std;

class CElectricityConsumption
{
 protected:
	 double countOfKillowats;
	 int countOfDays;
 public:
	 CElectricityConsumption(double killowats);
	 CElectricityConsumption();

	 double getKillowats() const;
	 void printName() const;
};