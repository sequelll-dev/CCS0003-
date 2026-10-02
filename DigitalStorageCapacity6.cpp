// DigitalStorageCapacity6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	long long bytes;
	double KB, MB, GB;

	cout << "Enter the number of bytes: ";
	cin >> bytes;

	KB = bytes / 1024.0;
	MB = KB / 1024.0;
	GB = MB / 1024.0;
	cout << fixed << setprecision(2);
	cout << "Bytes: " << bytes << endl;

	int wholeMB = static_cast<int>(MB);

	cout << fixed << setprecision(2);
	cout << "Kilobytes: " << KB << endl;
	cout << "Megabytes: " << MB << endl;
	cout << fixed << setprecision(4);

	cout << "Gigabytes: " << GB << endl;

	cout << "Whole Number of Megabytes: " << wholeMB << endl;
	return 0;

}
