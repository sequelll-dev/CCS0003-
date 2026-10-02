// EmergencyDroneDistanceCalculator7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2;
    
	cout << "Enter the coordinates of the first point (x1 y1): ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second point (x2 y2): ";
	cin >> x2 >> y2;

	double dx = x2 - x1;
	double dy = y2 - y1;

	double distance = sqrt(pow(dx, 2) + pow(dy, 2));

	int roundedDistance = static_cast<int>(round(distance));

	cout << fixed << setprecision(3);

	cout << "dx = " << dx << endl;
	cout << "dy = " << dy << endl;

	cout << "Distance = " << distance << endl;
	cout << "Rounded Distance = " << roundedDistance << endl;

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
