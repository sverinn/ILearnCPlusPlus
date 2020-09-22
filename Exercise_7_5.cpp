#include <iostream>

using namespace std;

static void CircleAreaPerimeter(double Radius, double &Area, double &Perimeter);

static void exercise_7_5()
{
	cout << "Enter radius: ";
	double Radius = 0.0;
	cin >> Radius;

	double Area = 0.0;
	double Perimeter = 0.0;

	CircleAreaPerimeter(Radius, Area, Perimeter);

	cout << "Area is " << Area << ", perimeter is " << Perimeter;
}


void CircleAreaPerimeter(double Radius, double& Area, double& Perimeter)
{
	Area = 3.1415 * Radius * Radius;
	Perimeter = 2 * 3.1415 * Radius;
}