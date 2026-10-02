// OnlineStoreInvoiceAndShippingBoxes10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	string productName;
	double unitPrice, quantity, discountPercentage, shipbox, unitsBox;

	cout << "Enter product name: ";
	getline(cin, productName);

	cout << "Enter unit price: ";
	cin >> unitPrice;

	cout << "Enter quantity: ";
	cin >> quantity;

	cout << "Enter discount percentage: ";
	cin >> discountPercentage;

	    cout << "Enter shipping fee per box: ";
		cin >> shipbox;
		cout << "Enter number of units per box: ";
		cin >> unitsBox;
		
		cout << fixed << setprecision(2);
		double subtotal = unitPrice * quantity;
		double discountAmount = subtotal * (discountPercentage / 100);
		double discountedSubtotal = subtotal - discountAmount;
		double exactBoxes = quantity / unitsBox;
		int boxesRequired = static_cast<int>(ceil(exactBoxes));

		cout << fixed << setprecision(2);
		double shippingTotal = boxesRequired * shipbox;
		double finalAmount = discountedSubtotal + shippingTotal;

		cout << "The subtotal is: Pesos " << subtotal << endl;
		cout << "The discount amount is: Pesos " << discountAmount << endl;
		cout << "The discounted subtotal is: Pesos " << discountedSubtotal << endl;
		cout << "The exact number of boxes required is: " << exactBoxes << endl;
		cout << "The number of boxes required is: " << boxesRequired << endl;
		cout << "The shipping total is: Pesos " << shippingTotal << endl;
		cout << "The final amount is: Pesos " << finalAmount << endl;

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
