#include "CElectricityConsumption.h"
#include "CFixedElectricityConsumption.h"
#include "CMultiZoneElectricityConsumption.h"
#include "CSocialElectricityConsumption.h"

#include <iostream>
#include <cstdlib>
#include <fstream>

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

	CMultiZoneElectricityConsumption multiZone(100, 7, 11);
	multiZone.printName();
	cout << "Count of killowats: " << multiZone .getKillowats() << endl
		 << "Cost: " << multiZone.calculateCost() << endl << endl;

	ofstream outfile;
	outfile.open("output.txt");
	if (outfile.is_open()) {

		outfile << "CElectricityConsumption" << endl;
		outfile << "Count of killowats: " << fixed.getKillowats() << endl
			<< "Cost: " << fixed.calculateCost() << endl << endl;

		outfile << "CSocialElectricityConsumption" << endl;
		outfile << "Count of killowats: " << lessSocial.getKillowats() << endl
			<< "Cost: " << lessSocial.calculateCost() << endl << endl;

		outfile << "CSocialElectricityConsumption" << endl;
		outfile << "Count of killowats: " << moreSocial.getKillowats() << endl
			<< "Cost: " << moreSocial.calculateCost() << endl << endl;

		outfile << "CMultiZoneElectricityConsumption" << endl;
		outfile << "Count of killowats: " << multiZone.getKillowats() << endl
			<< "Cost: " << multiZone.calculateCost() << endl << endl;

		outfile.close();
	}
	return 0;
}