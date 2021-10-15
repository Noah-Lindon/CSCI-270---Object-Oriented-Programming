// C++ program to demonstrate implementation 
// of Inheritance
// Noah Lindon
// CSCI 270
// 10-23-19
#include <iostream> 
#include <string>
using namespace std;

//Base class 
class Insect
{
public:
	int legs;
};

// Sub class inheriting from Base Class(Insect) 
class Bee : public Insect
{
public:
	int stinger_size;
};
// Sub class inheriting from Base Class(Insect) and holds the string field
class Ant : public Insect
{
public:
	string species;
};

//main function 
int main()
{

	Bee obj1;
	Ant obj2;

	// The defined variables for the Bee class.
	obj1.stinger_size = 2;
	obj1.legs = 6;
	// The defined variables for the Ant class.
	obj2.species = "carpenter";
	obj2.legs = 6;
	// tests the Bee class with the inheritance of legs from insect.
	cout << "Bee stinger size is " << obj1.stinger_size << endl;
	cout << "Bee's number of legs is " << obj1.legs << endl;
	// tests the Ant class with inheritance of legs from insect.
	cout << "\nAnt species is " << obj2.species << endl;
	cout << "Ant's number of legs is " << obj2.legs << endl;

	system("pause");
	return 0;
}