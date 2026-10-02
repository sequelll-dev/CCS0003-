// ScholarshipGradeSummary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double quizzes, laboratory, projects, examination;

	cout << "Enter the average of quizzes: ";
	cin >> quizzes;

	cout << "Enter the average of laboratory: ";
	cin >> laboratory;

	cout << "Enter the average of projects: ";
	cin >> projects;

	cout << "Enter the average of examination: ";
	cin >> examination;

	double weightedAverage = (quizzes * 0.20) + (laboratory * 0.25) + (projects * 0.25) + (examination * 0.30);

	int roundedGrade = round(weightedAverage);

	int truncatedGrade = static_cast<int>(weightedAverage);

	cout << fixed << setprecision(2);

	cout << "\n--- Grade Summary ---\n";
	cout << "Weighted grade:       " << weightedAverage << '\n';
	cout << "Rounded whole number: " << roundedGrade << '\n';
	cout << "Cast to int:      " << truncatedGrade << '\n';

	return 0;
}
