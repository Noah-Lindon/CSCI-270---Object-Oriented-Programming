/* This program takes daily sales amounts over a period of time and calculates their total.
/ Noah Lindon
/ CSCI 270
/8-29-2019
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int days; // Number of days
	double total = 0.0; // Accumulator, initialized with 0
	char answer; // answer for if the user wants to run the program again

	// Get the number of days.
	cout << "For how many days do you have sales amounts? ";
	cin >> days;

	// Get the sales for each day and accumulate a total.
	for (int count = 1; count <= days; count++)
	{
		double sales;
		cout << "Enter the sales for day " << count << ": ";
		cin >> sales;
		total += sales;
	}

	// Display the total sales.
	cout << fixed << showpoint << setprecision(2);
	cout << "The total sales are $" << total << endl;
	//below asks the user if they want to run the program again.
	cout << "Would you like to run the program again?  Enter y or n.\n";
	cin >> answer;
	while (answer == 'y' || answer == 'Y')
	{
		total = 0.0;
		// Get the number of days.
		cout << "For how many days do you have sales amounts? ";
		cin >> days;
		// Get the sales for each day and accumulate a total.
		for (int count = 1; count <= days; count++)
		{
			double sales;
			cout << "Enter the sales for day " << count << ": ";
			cin >> sales;
			total += sales;
		}
		// Display the total sales.
		cout << fixed << showpoint << setprecision(2);
		cout << "The total sales are $" << total << endl;
		//below asks the user if they want to run the program again
		cout << "Would you like to run the program again?  Enter y or n. ";
		cin >> answer;
	}


	system("Pause");
	return 0;
}