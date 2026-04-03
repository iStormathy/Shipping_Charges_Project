#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double weight, distance, rate;
	cout << "Enter the weight (in kg's) of your package: ";
	cin >> weight;
	if (weight <= 0 || weight > 20)
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
		cout << "How far (in miles) is the destination?: ";
		cin >> distance;
		if (distance <= 0 || distance > 3000)
			cout << "Destination too far, cannot ship.";
		else
		{
			double finalPrice = rate*(trunc(distance / 500) +1);
			cout << "Final Price: $" << fixed << setprecision(2) << finalPrice;
		}
	}
}