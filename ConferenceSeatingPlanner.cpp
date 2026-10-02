// ConferenceSeatingPlanner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double attendees, seatsPerTable;
	cout << "Enter the number of attendees: ";
	cin >> attendees;
	
	cout << "Enter the number of seats per table: ";
	cin >> seatsPerTable;

	if (attendees < 0 || seatsPerTable <= 0) {
		cout << "Invalid input.\n";
		return 1;
	}

	double exactTables = static_cast<double>(attendees) / seatsPerTable;
	int tablesNeeded = static_cast<int>(ceil(exactTables));

	int totalAvailableSeats = tablesNeeded * seatsPerTable;
	int unusedSeats = totalAvailableSeats - attendees;

	cout << fixed << setprecision(2);

	cout << "Exact Tables: " << exactTables << endl;
	cout << "Tables required: " << tablesNeeded << endl;
	cout << "Total available seats: " << totalAvailableSeats << endl;
	cout << "Unused seats: " << unusedSeats << endl;
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
