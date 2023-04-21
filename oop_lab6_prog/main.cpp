#include "CElectricityConsumption.h"
#include "CFixedElectricityConsumption.h"
#include "CMultiZoneElectricityConsumption.h"
#include "CSocialElectricityConsumption.h"

#include <iostream>

using namespace std;

int main() {
	CFixedElectricityConsumption fixed(5);
	fixed.printName();
	cout << "Count of killowats: " << fixed.getKillowats() << endl
		 << "Cost: " << fixed.calculateCost() << endl << endl;

	CSocialElectricityConsumption lessSocial(99);
	lessSocial.printName();
	cout << "Count of killowats: " << lessSocial.getKillowats() << endl
		 << "Cost: " << lessSocial.calculateCost() << endl << endl;

	CSocialElectricityConsumption moreSocial(101);
	moreSocial.printName();
	cout << "Count of killowats: " << moreSocial.getKillowats() << endl
		 << "Cost: " << moreSocial.calculateCost() << endl << endl;

	CMultiZoneElectricityConsumption multiZone(100, 1, 5);
	multiZone.printName();
	cout << "Count of killowats: " << multiZone .getKillowats() << endl
		 << "Cost: " << multiZone.calculateCost() << endl << endl;
}