// CampusCanteenGroupOrder1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mealPrice, quantityOrdered, serviceCharge, students;
	cout << "Enter the price of the meal: ";
	cin >> mealPrice;

	cout << "Enter the quantity ordered: ";
	cin >> quantityOrdered;

	cout << "Enter the service charge: ";
	cin >> serviceCharge;

	cout << "Enter the number of students: ";
	cin >> students;

	double serviceChargePercentage = serviceCharge / 100;
	double subtotal = mealPrice * quantityOrdered;
	double serviceChargeAmount = subtotal * serviceChargePercentage;
	double studentShare = (subtotal + serviceChargeAmount) / students;

	cout << fixed << setprecision(2);
	cout << "Subtotal: Pesos " << subtotal << endl;
	cout << "Service Charge: Pesos " << serviceChargeAmount << endl;
	cout << "Total Amount: Pesos " << subtotal + serviceChargeAmount << endl;
	cout << "Each student should pay: Pesos " << studentShare << endl;
	return 0;
   
}
