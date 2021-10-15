// This program demonstrates a simple class.
// Noah Lindon
// CSCI 270
// 9-17-19
#include <iostream>
#include <string>
using namespace std;

// Circle class declaration.
class Circle
{
private:
	double radius;
	const double PI = 3.14159;
	string material;
public:
	Circle();
	Circle(double);
	void setRadius(double);//
	void setMaterial(string);
	double getRadius() const;//
	double getArea() const;
	double getDiameter() const;
	double getCircumference() const;
	string getMaterial();
};

//************************
// Default Constructor.   *
//************************

Circle::Circle()
{
	radius = 0.0;
}

//*************************
// First Constructor.      *
//*************************

Circle::Circle(double r)
{
	radius = r;
}

//**************************************************
// setRadius assigns a value to the radius member.   *
//**************************************************

 void Circle::setRadius(double r)
{
	radius = r;
}



//**************************************************
// getRadius returns the value in the radius member. *
//**************************************************

double Circle::getRadius() const
{
	return radius;
}

//****************************************************
// setMaterial assigns a name to the material member. *
//****************************************************

void Circle::setMaterial(string _material)
{
	//cout << "What is the material of the circle? ";
	material = _material;
}

//****************************************************
// getMaterial returns the name in the material member. *
//****************************************************

string Circle::getMaterial()
{
	//cout << "What is the material of the circle? ";

	return material;
}


//****************************************************
// getArea returns the product of width times length. *
//****************************************************

double Circle::getArea() const
{
	return PI * radius * radius;
}

//***************************************************
// getDiameter returns the product of radius time 2. *
//***************************************************

double Circle::getDiameter() const
{
	return radius * 2;
}

//*************************************************************
// getcircumference returns the product of 2 times pi * radius *
//*************************************************************

double Circle::getCircumference() const
{
	return 2 * PI * radius;
}

//****************************************************
// Function main                                      *
//****************************************************

int main()
{
	Circle sphere;     // Define an instance of the Circle class
	double rectWidth;  // Local variable for width
	double rectLength; // Local variable for length
	double circRad;
	string circMaterial;

	// Get the Circle's radius and material from the user.
	cout << "What is the radius? ";
	cin >> circRad;
	cout << "What is the material of the circle? ";
	cin >> circMaterial;

	// Store the radius and material of the Circle
	// in the sphere object.
	sphere.setRadius(circRad);
	sphere.setMaterial(circMaterial);
	// Display the Circle's data.
	cout << "Here is the Circle's data:\n";
	cout << "Radius: " << sphere.getRadius() << endl;
	cout << "Area: " << sphere.getArea() << endl;
	cout << "Diameter: " << sphere.getDiameter() << endl;
	cout << "Circumferene: " << sphere.getCircumference() << endl;
	cout << "Material: " << sphere.getMaterial() << endl;
	system("Pause");
	return 0;
}