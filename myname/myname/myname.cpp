//My Name Program
//CPT-180-27
//Programmer: Zach Murphy
#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	//character declarations of my names letters with the ascii values. 
	char letterOne = 90;
	char letterTwo = 97;
	char letterThree = 99;
	char letterFour = 104;
	char letterFive = 77;
	char letterSix = 117;
	char letterSeven = 114;
	char letterEight = 112;
	char letterNine = 104;
	char letterTen = 121;
	char space = 32;

	//calculate the sum of all asci
	int total = letterOne + letterTwo + letterThree + letterFour + letterFive
		+ letterSix + letterSeven + letterEight + letterNine + letterTen;

	//output my name 
	cout << "I am about to show you the ascii value of my full name!\n";
	cout << "My name is " << letterOne << letterTwo << letterThree << letterFour <<space << letterFive << letterSix << letterSeven
		<< letterEight << letterNine << letterTen <<"\n"; 

	//output the ascii value
	cout << "The Ascii total is: " << total << "\n\n\n";
	cout << "Press any key to close this window";

	_getch();
	return 0;
	
}


