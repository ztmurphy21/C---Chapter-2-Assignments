//Restaurant Bill Program
//Purpose: Calculates the restaurant bill total
//CPT-180-27
//Programmer: Zachary Murphy
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main() {
	//declarations of variables
	double meal = 88.67;
	double taxRate = .0675;
	double tipPercent = .2;

	//calculations
	//tax cost
	double tax = meal * taxRate;
	//amount of tip
	double tipAmount = meal * tipPercent;
	//total of bill
	double totalBill = meal + tax + tipAmount;

	//needed only make output two decimal places
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	//output all information to user
	cout << "Your bill summary:\n\n";
	cout << "Meal Total: \t\t$" << meal <<"\n";
	cout << "Tax Amount (6.75%): \t$" << tax << "\n";
	cout << "Tip Amount (20%): \t$" << tipAmount << "\n";
	cout << "Total Bill: \t\t$" << totalBill << "\n";
	cout << "Thank you for choosing Palombo's!\n\n";

	cout << "Press any key to exit...";

	_getch();
	return 0;
}