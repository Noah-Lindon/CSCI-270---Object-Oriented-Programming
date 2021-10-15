// This program demonstrates the order in which base and
// derived class constructors and destructors are called.
#include <iostream>
#include <string>
using namespace std;

// Function prototypes
void displayPerson(PersonData);
void displayCustomer(CustomerData);

//********************************
// PersonData declaration         *
//********************************

class PersonData
{
private:
	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;
public:
	PersonData()  // Constructor
	{
		firstName = "unknown";
		lastName = "unknown";
		address = "unknown";
		city = "unknown";
		state = "unknown";
		zip = "unknown";
		phone = "unknown";
	}

	PersonData(string last, string first, string add, string city, string state, string zip, string num)
	{
		setLastName(last);
		setFirstName(first);
		setAddress(add);
		setCity(city);
		setState(state);
		setZip(zip);
		setPhone(num);
	}
	void setLastName(string last)
	{
		lastName = last;
	}
	void setFirstName(string first)
	{
		firstName = first;
	}
	void setAddress(string add)
	{
		address = add;
	}
	void setCity(string city)
	{
		city = city;
	}
	void setState(string state)
	{
		state = state;
	}
	void setZip(string zip)
	{
		zip = zip;
	}
	void setPhone(string num)
	{
		phone = num;
	}

	string getLastName()
	{
		return lastName;
	}
	string getFirstName()
	{
		return firstName;
	}
	string getAddress()
	{
		return address;
	}
	string getState()
	{
		return state;
	}
	string getZip()
	{
		return zip;
	}
	string getCity()
	{
		return city;
	}
	string getPhone()
	{
		return phone;
	}


};

//********************************
// CustomerData declaration      *
//********************************

class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;
public:
	CustomerData()  // Constructor
	{
		customerNumber = 1;
		mailingList = false;
	}

	CustomerData(string last, string first, string add, string city, string state, string zip, string num, int custo, bool list) :PersonData(last,
		first, add, city, state, zip, num)
	{
		setCustomerNumber(custo);
		setMailingList(list);
	}
	void setCustomerNumber(int num)
	{
		customerNumber = num;
	}
	void setMailingList(bool list)
	{
		if (list == false)
		{

		}
		else
			mailingList = true;
	}
	int getCustomerNumber()
	{
		return customerNumber;
	}
	bool getMailingList()
	{
		return mailingList;
	}


};

//********************************
// main function                 *
//********************************

int main()
{
	// Create a PersonData object and pass arguments
	// to the constructor.
	PersonData person1("Student", "Joe", "123 Bulldog Street",
		"Starkville", "MS", "39759", "662-555-1234");

	// Display the object's data.
	cout << "Person #1\n"
		<< "-----------\n";
	displayPerson(person1);

	// Create a CustomerData object and pass arguments
	// to the constructor. All of the arguments are
	// C++ strings except customerNumber and mailingList
	CustomerData customer1("Smith", "Joan", "123 Main Street",
		"Smithville", "NC", "99999", "123-123-1234", 12345,
		true);

	// Display the object's data.
	cout << "Customer #1\n"
		<< "-----------\n";
	displayCustomer(customer1);

	// Create another CustomerData object using the default
	// constructor and mutator functions. All of the arguments 
	// are C++ strings except customerNumber and mailingList
	CustomerData customer2;
	customer2.setLastName("Jones");
	customer2.setFirstName("Jenny");
	customer2.setAddress("555 East Street");
	customer2.setCity("Jonesville");
	customer2.setState("VA");
	customer2.setZip("88888");
	customer2.setPhone("888-888-8888");
	customer2.setCustomerNumber(77777);
	customer2.setMailingList(false);

	// Display the object's data.
	cout << "Customer #2\n"
		<< "-----------\n";
	displayCustomer(customer2);
	
	system("pause");
	return 0;
}
//******************************************************
// The displayPerson function accepts a PersonData     *
// object as its argument and displays the object's    *
// data.                                               *
//******************************************************
void displayPerson(PersonData p)
{
	// Display all the data...
	cout << "Last Name: " << p.getLastName() << endl
		<< "First Name: " << p.getFirstName() << endl
		<< "Address: " << p.getAddress() << endl
		<< "City: " << p.getCity() << endl
		<< "State: " << p.getState() << endl
		<< "ZIP: " << p.getZip() << endl
		<< "Phone: " << p.getPhone() << endl << endl;
}
//******************************************************
// The displayCustomer function accepts a CustomerData *
// object as its argument and displays the object's    *
// data.                                               *
//******************************************************
void displayCustomer(CustomerData c)
{
	// Display all the data but mailing list...
	cout << "Last Name: " << c.getLastName() << endl
		<< "First Name: " << c.getFirstName() << endl
		<< "Address: " << c.getAddress() << endl
		<< "City: " << c.getCity() << endl
		<< "State: " << c.getState() << endl
		<< "ZIP: " << c.getZip() << endl
		<< "Phone: " << c.getPhone() << endl
		<< "Customer Number: "
		<< c.getCustomerNumber() << endl
		<< "Mailing List? ";
	// Display Yes or No for mailing list.
	if (c.getMailingList())
		cout << "Yes" << endl << endl;
	else
		cout << "No" << endl << endl;
}