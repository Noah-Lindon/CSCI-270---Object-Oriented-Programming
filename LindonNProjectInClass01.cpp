/* This program demonstrates a simple class.
/ Noah Lindon
/ CSCI 270
/ 9-3-19
*/
#include <iostream>
using namespace std;

// Box class declaration.
class Box
{
private:
	double width;
	double length;
	double height;
public:
	void setWidth(double);
	void setLength(double);
	void setHeight(double);
	double getWidth() const;
	double getLength() const;
	double getSurfaceArea() const;
	double getHeight() const;
	double getVolume() const;
};

//**************************************************
// setWidth assigns a value to the width member.   *
//**************************************************

void Box::setWidth(double w)
{
	width = w;
}

//**************************************************
// setLength assigns a value to the length member. *
//**************************************************

void Box::setLength(double len)
{
	length = len;
}

// setHeight assigns a value to the height member.
void Box::setHeight(double hei)
{
	height = hei;
}

//**************************************************
// getWidth returns the value in the width member. *
//**************************************************

double Box::getWidth() const
{
	return width;
}

//****************************************************
// getLength returns the value in the length member. *
//****************************************************

double Box::getLength() const
{
	return length;
}

//*****************************************************
// getSurfaceArea returns the product of width times length. *
//*****************************************************

double Box::getSurfaceArea() const
{
	return 2 * (height * width) + 2.0 * (height * length) + 2.0 * (width * length);
}

// GetVolume returns the product of height times width times length.
double Box::getVolume() const
{
	return height * width * length;
}

//*****************************************************
// Function main                                      *
//*****************************************************

int main()
{
	Box Box1;     // Define an instance of the Box class
	double boxWidth;  // Local variable for width
	double boxLength; // Local variable for length
	double boxHeight; // local variable for height

	// Get the Box's width, length, and height from the user.
	cout << "This program will calculate the area of a\n";
	cout << "Box. What is the width? ";
	cin >> boxWidth;
	cout << "What is the length? ";
	cin >> boxLength;
	cout << "What is the heigh? ";
	cin >> boxHeight;

	// Store the width and length of the Box
	// in the Box object.
	Box1.setWidth(boxWidth);
	Box1.setLength(boxLength);
	Box1.setHeight(boxHeight);

	// Display the Box's data.
	cout << "Here is the Box's data:\n";
	cout << "Width: " << Box1.getWidth() << endl;
	cout << "Length: " << Box1.getLength() << endl;
	cout << "Surface Area: " << Box1.getSurfaceArea() << endl;
	cout << "Volume: " << Box1.getVolume() << endl;
	system("Pause");
	return 0;
}