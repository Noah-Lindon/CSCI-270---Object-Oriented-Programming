// Noah Lindon
// CSCI 270
// 10/10/19
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class Month
{
private:
	string name;
	int monthNumber;
public:
	Month()
	{
		monthNumber = 1;
		name = "January";
	}
	Month(string n)
	{
		name = n;
		monthNumber = convertName(n);
	}
	Month(int num)
	{
		monthNumber = num;
		name = convertNum(num);
	}
	string getName()
	{

		return name;
	}
	int getNum()
	{

		return monthNumber;
	}
	void setName(string n)
	{
		name = n;
	}
	void setNum(int num)
	{
		monthNumber = num;
	}
	int convertName(string n)
	{
		if (n == "January")
			return 1;
		else if (n == "February")
			return 2;
		else if (n == "March")
			return 3;
		else if (n == "April" || n == "april")
		{
			monthNumber = 4;
		}
		else if (n == "May" || n == "may")
		{
			monthNumber = 5;
		}
		else if (n == "June" || n == "june")
		{
			monthNumber = 6;
		}
		else if (n == "July" || n == "july")
		{
			monthNumber = 7;
		}
		else if (n == "August" || n == "august")
		{
			monthNumber = 8;
		}
		else if (n == "September" || n == "September")
		{
			monthNumber = 9;
		}
		else if (n == "October" || n == "october")
		{
			monthNumber = 10;
		}
		else if (n == "November" || n == "november")
		{
			monthNumber = 11;
		}
		else if (n == "December" || n == "december")
		{
			monthNumber = 12;
		}
	}
	string convertNum(int num)
	{
		if (num == 1)
			return "January";
		else if (num == 2)
			return "February";
		else if (num == 3)
			return "March";
		else if (num == 4)
		{
			name = "April";
		}
		else if (num == 5)
		{
			name = "May";
		}
		else if (num == 6)
		{
			name = "June";
		}
		else if (num == 7)
		{
			name = "July";
		}
		else if (num == 8)
		{
			name = "August";
		}
		else if (num == 9)
		{
			name = "September";
		}
		else if (num == 10)
		{
			name = "October";
		}
		else if (num == 11)
		{
			name = "November";
		}
		else if (num == 12)
		{
			name = "December";
		}
	}
	void Month :: operator++()
	{
		monthNumber++;

		if (monthNumber == 13)
		{
			monthNumber = 1;
		}

		name = convertNum(monthNumber);
	}
	void Month :: operator--()
	{
		monthNumber--;
		if (monthNumber == 1)
		{
			monthNumber = 12;
		}

		name = convertNum(monthNumber);
	}
};

int main()
{
	Month myMonth;   // Tests the default constructor  DO THIS
	Month myMonth1("March");     // Tests the second constructor
	// Tests the default constructor
	cout << "The default month name is: " << myMonth.getName() << endl;
	cout << "The default month number is: " << myMonth.getNum() << endl;
	// Tests the second constructor
	cout << "\nThe month name is: " << myMonth1.getName() << endl;
	cout << "The month number is: " << myMonth1.getNum() << endl;

	Month myMonth2(2);     // Tests the third constructor
	cout << "\nThe month name is: " << myMonth2.getName() << endl;
	cout << "The month number is: " << myMonth2.getNum() << endl;

	// Tests the ++ operator
	myMonth2++;
	cout << "\nThe next month name is: " << myMonth2.getName() << endl;
	cout << "The next month number is: " << myMonth2.getNum() << endl;

	// Tests the -- operator
	myMonth2--;
	cout << "\nThe previous month name is: " << myMonth2.getName() << endl;
	cout << "The previous month number is: " << myMonth2.getNum() << endl;

	system("pause");
	return 0;
}