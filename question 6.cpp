#include <iostream>
using namespace std;
int main() {
	double TakeoffDistance;
	double LandingDistance;
	cout << "Enter takeoff distance: " << endl;
	cin >> TakeoffDistance;
	cout << "Enter landing distance: " << endl;
	cin >> LandingDistance;
	double initialFuel, finalFuel;
	cout << "Enter initial fuel: ";
	cin >> initialFuel;
	cout << "Enter final fuel: ";
	cin >> finalFuel;
	double fuelConsumed = initialFuel - finalFuel;
	double fuelEfficiency = (TakeoffDistance + LandingDistance) / fuelConsumed;
	cout << "Fuel efficiency of the airplane: " << fuelEfficiency << " feet per gallon" << endl;
	return 0;
}

