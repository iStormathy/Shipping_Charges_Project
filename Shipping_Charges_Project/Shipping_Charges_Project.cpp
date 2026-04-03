// This program calculates the rate of a delivery
// based on weight and distance travelled
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double weight, distance, rate;
	cout << "Enter the weight (in kg's) of your package: ";
	cin >> weight;
	if (weight <= 0 || weight > 20)	// Limits weight to 20 kg's
		cout << "Package to heavy, cannot ship.";
	else
	{
		if (weight <= 2)
			rate = 1.10;
		else if
			(weight > 2 && weight <= 6)
			rate = 2.20;
		else if
			(weight > 6 && weight <= 10)
			rate = 3.70;
		else
			rate = 4.80;
		cout << "Enter distance (in miles): ";
		cin >> distance;
		if (distance <= 0 || distance > 3000) // Limits distance to 3000 miles
			cout << "Destination too far, cannot ship.";
		else
		{
			double finalPrice = rate*(trunc(ceil(distance) / 500) +1);
			//"distance / 500" is truncated in order to prevent rollover into higher price bracket
			cout << "Final Price: $" << fixed << setprecision(2) << finalPrice;
		}
	}
}