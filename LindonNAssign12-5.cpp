// This program demonstrates an overloaded function template.
// Noah Lindon
// CSCI 270
// 11/14/19
#include <iostream>
using namespace std;

template <class T>
T sum(T val1, T val2)
{
	return val1 + val2;
}

template <class T>
T sum(T val1, T val2, T val3)
{
	return val1 + val2 + val3;
}

template <class T>
T sum(T val1, T val2, T val3, T val4)
{
	return val1 + val2 + val3 +val4;
}

template <class T>
T sum(T val1, T val2, T val3, T val4, T val5)
{
	return val1 + val2 + val3 + val4 + val5;
}

int main()
{
	double num1, num2, num3, num4, num5;

	// Get two values and display their sum.
	cout << "Enter two values: ";
	cin >> num1 >> num2;
	cout << "Their sum is " << sum(num1, num2) << endl;

	// Get three values and display their sum.
	cout << "Enter three values: ";
	cin >> num1 >> num2 >> num3;
	cout << "Their sum is " << sum(num1, num2, num3) << endl;

	// Get four values and display their sum.
	cout << "Enter four values: ";
	cin >> num1 >> num2 >> num3 >> num4;
	cout << "Their sum is " << sum(num1, num2, num3, num4) << endl;

	// Get five values and display their sum.
	cout << "Enter five values: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << "Their sum is " << sum(num1, num2, num3, num4, num5) << endl;

	system("pause");
	return 0;
}