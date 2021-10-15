// This program illustrates class hierarchy of a person => student, and person => employee

#include <iostream>
#include <string>
using namespace std;

class person
{
private:
	string name;
	char gender;
	int age;
	// new variable to the person class
	string state;
public:
	void getdata()
	{
		cout << "Name: ";
		cin >> name;
		cout << "Age: ";
		cin >> age;
		cout << "Gender: ";
		cin >> gender;
		// new variable to the person class
		cout << "State: ";
		cin >> state;
	}
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Gender: " << gender << endl;
		// displays the new variable
		cout << "State: " << state << endl;
	}
};

class student : public person
{
private:
	string institute;
	char level;
public:
	void getdata()
	{
		person::getdata();
		cout << "Name of College/School: ";
		cin >> institute;
		cout << "Level: ";
		cin >> level;
	}
	void display()
	{
		person::display();
		cout << "Name of College/School: " << institute << endl;
		cout << "Level: " << level << endl;
	}
};

class employee : public person
{
	string company;
	float salary;
public:
	void getdata()
	{
		person::getdata();
		cout << "Name of Company: ";
		cin >> company;
		cout << "Salary: ";
		cin >> salary;
	}
	void display()
	{
		person::display();
		cout << "Name of Company: " << company << endl;
		cout << "Salary: $" << salary << endl;
	}
};

// new class that is of type public person
class teacher : public person
{
private:
	string subject;
	int roomNum;
	int studentNum;
public:
	void getdata()
	{
		person::getdata();
		cout << "Subject of the class: ";
		cin >> subject;
		cout << "Room number of the classroom: ";
		cin >> roomNum;
		cout << "Number of students in the class: ";
		cin >> studentNum;
	}
	void display()
	{
		person::display();
		cout << "Subject of the class: " << subject << endl;
		cout << "Room number of the classroom: " << roomNum << endl;
		cout << "Number of students in the class: ";
	}
};

int main()
{
	student s;
	employee e;
	teacher t;

	cout << "Student" << endl;
	cout << "Enter data" << endl;
	s.getdata();
	cout << endl << "Displaying data" << endl;
	s.display();

	cout << endl << "Employee" << endl;
	cout << "Enter data" << endl;
	e.getdata();
	cout << endl << "Displaying data" << endl;
	e.display();

	cout << endl << "Teacher" << endl;
	cout << "Enter data" << endl;
	t.getdata();
	cout << endl << "Displaying data" << endl;
	t.display();

	system("pause");
	return 0;
}