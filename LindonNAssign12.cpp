// Noah Lindon
// CSCI 270
// 11-7-19
// This program uses a function template.
#include <iostream>
#include <iomanip>
using namespace std;

// Template definition for largest function.
template <class T>

T largest(T number1, T number2)
{
	if (number1 > number2)
		return number1;
	else
		return number2;
}

// Template definition for smallest function
template <class T2>
T2 smallest(T2 number1, T2 number2)
{
	if (number1 < number2)
		return number1;
	else
	return number2;
}


int main()
{
	double userInt1;        // To hold integer input
	double userInt2;		// To hold 2nd integer input
	int userInt3;        // To hold integer input
	int userInt4;

	cout << setprecision(5);
	cout << "Enter 2 doubles: ";
	cin >> userInt1 >> userInt2;
	cout << "The largest number is: " << largest(userInt1, userInt2) << endl;
	cout << "The smallest number is: " << smallest(userInt1, userInt2) << endl;

	cout << "Enter 2 integers: ";
	cin >> userInt3 >> userInt4;
	cout << "The largest number is: " << largest(userInt3, userInt4) << endl;
	cout << "The smallest number is: " << smallest(userInt3, userInt4) << endl;

	system("pause");
	return 0;
}