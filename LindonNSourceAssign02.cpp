// This program demonstrates a destructor.
// Noah Lindon
// CSCI 270
// 9-10-19
#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
	string name;
	int idNumber;
	string department;
	string position;
public:
	Employee(string, int, string, string);
	Employee(string, int);
	Employee();     // Default Constructor
	string getName();
	int getIDNumber();
	string getDepartment();
	string getPosition();
};

Employee::Employee(string nme, int id, string dept, string pos)
{
	name = nme;
	idNumber = id;
	department = dept;
	position = pos;
}

Employee::Employee(string nme, int id)
{
	name = nme;
	idNumber = id;
	department = " ";
	position = " ";
}

Employee::Employee()
{
	name = " ";
	department = " ";
	position = " ";
	idNumber = 0;
}

string Employee::getName()
{
	return name;
}

int Employee::getIDNumber()
{
	return idNumber;
}

string Employee::getDepartment()
{
	return department;
}

string Employee::getPosition()
{
	return position;
}

//*********************************************
// Function main.                             *
//*********************************************

int main()
{
	Employee susan("Susan Meyers", 47899, "Accounting", "Vice President");

	Employee mark("Mark Jones", 33333);

	Employee empty;

	cout << "Name: " << susan.getName() << endl;
	cout << "ID Number: " << susan.getIDNumber() << endl;
	cout << "Department: " << susan.getDepartment() << endl;
	cout << "Position: " << susan.getPosition() << "\n" << endl;

	cout << "Name: " << mark.getName() << endl;
	cout << "ID Number: " << mark.getIDNumber() << endl;
	cout << "Department: " << mark.getDepartment() << endl;
	cout << "Position: " << mark.getPosition() << "\n" << endl;

	cout << "Name: " << empty.getName() << endl;
	cout << "ID Number: " << empty.getIDNumber() << endl;
	cout << "Department: " << empty.getDepartment() << endl;
	cout << "Position: " << empty.getPosition() << endl;

	system("pause");
	return 0;
}