// Ride-Sharing-Split-Fare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main()
{
	double baseFare, costperKilometer, ratePerKilometer, tollFee, BookingFeePercentage, PassengerCount;

	cout << "Enter the base fare: ";
	cin >> baseFare;

	cout << "Enter the cost per kilometer: ";
	cin >> costperKilometer;

	cout << "Enter the rate per kilometer: ";
	cin >> ratePerKilometer;

	cout << "Enter the toll fee: ";
	cin >> tollFee;

	cout << "Enter the booking fee percentage: ";
	cin >> BookingFeePercentage;

	cout << "Enter the number of passengers: ";
	cin >> PassengerCount;
	if (PassengerCount <= 0) {
		cout << "Error: Number of passengers must be greater than zero." << endl;
		return 1; // Exit the program with an error code
	}
	double distanceCharge = costperKilometer * ratePerKilometer;
	double prefeeTotal = baseFare + distanceCharge + tollFee;
	double bookingFeeTotal = prefeeTotal * (BookingFeePercentage / 100);
	double grandTotal = prefeeTotal + bookingFeeTotal;
	double amountPerPassenger = grandTotal / PassengerCount;

	cout << fixed << setprecision(2);

	cout << "\n--- Trip Cost Breakdown ---\n";
	cout << "Distance charge:        Pesos" << distanceCharge << '\n';
	cout << "Pre-fee total:          Pesos" << prefeeTotal << '\n';
	cout << "Booking fee:            Pesos" << bookingFeeTotal << '\n';
	cout << "Grand total:            Pesos" << grandTotal << '\n';
	cout << "Amount per passenger:   Pesos" << amountPerPassenger << '\n';

	return 0;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
