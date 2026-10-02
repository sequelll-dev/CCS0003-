// EnvironmentalSensorSummary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double T1, T2, T3;

	cout << "Enter the temperature reading from sensor 1: ";
	cin >> T1;

	cout << "Enter the temperature reading from sensor 2: ";
	cin >> T2;

	cout << "Enter the temperature reading from sensor 3: ";
	cin >> T3;
	cout << fixed << setprecision(3);
	double averageTemp = (T1 + T2 + T3) / 3;
	double fabsTemp1Temp3 = fabs(T1 - T3);\

		int floorAverageTemp = floor(averageTemp);
	int ceilAverageTemp = ceil(averageTemp);
	int truncAverageTemp = trunc(averageTemp);
	int roundAverageTemp = round(averageTemp);

	cout << "The average temperature is: " << averageTemp << endl;
	cout << "The absolute difference between sensor 1 and sensor 3 is: " << fabsTemp1Temp3 << endl;
	cout << "The floor of the average temperature is: " << floorAverageTemp << endl;
	cout << "The ceiling of the average temperature is: " << ceilAverageTemp << endl;
	cout << "The truncated value of the average temperature is: " << truncAverageTemp << endl;
	cout << "The rounded value of the average temperature is: " << roundAverageTemp << endl;
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
