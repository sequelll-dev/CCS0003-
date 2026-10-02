#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double tuition,feePercentage, downPayment, installments;

	cout << "Enter the tuition amount: ";
	cin >> tuition;

	cout << "Enter the fee percentage: ";
	cin >> feePercentage;

	cout << "Enter the down payment amount: ";
	cin >> downPayment;

	cout << "Enter the number of installments: ";
	cin >> installments;

	if (installments <= 0) {
		cout << "number of installments must be greater than 0";
		return 1;
	}

	double processingFee = tuition * (feePercentage / 100);
	double adjustedTuition = tuition + processingFee;
	double remainingBalance = adjustedTuition - downPayment;
	double monthlyPayment = remainingBalance / installments;

	cout << fixed << setprecision(2);
	cout << "Processing fee: Pesos " << processingFee << endl;	
	cout << "Adjusted tuition: Pesos " << adjustedTuition << endl;
	cout << "Remaining balance: Pesos " << remainingBalance << endl;
	cout << "Monthly payment: Pesos " << monthlyPayment << endl;

	return 0;						
}