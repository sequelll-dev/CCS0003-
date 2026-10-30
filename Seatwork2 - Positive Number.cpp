// Seatwork2 - Positive Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
	int number;

	cout << "Enter a number (maximum of 4 digits): ";
	cin >> number;

	if (number > 0 && number <= 9999) {
		cout << "It is a positive number" << endl;
		if (number <= 9) {
			cout << "The number has 1 digit";
		}
		else if (number <= 99) {
			cout << "The number has 2 digits";
		}
		else if (number <= 999) {
			cout << "The number has 3 digits";
		}
		else {
			cout << "The number has 4 digits";
		}
	}
	else if (number <= 0) {
		cout << "It is a non positive number.";
	}
	else {
		cout << "Invalid input!";
	}

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
