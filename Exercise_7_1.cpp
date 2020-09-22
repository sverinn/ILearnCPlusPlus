#include <iostream>

using namespace std;

inline double Area(double Radius);

inline double Area(double Radius, double Height);

static void exercise_7_1()
{
	cout << "Enter c for sphere, anything else for cylinder" << endl;

	char Choice = 'c';
	cin >> Choice;

	if (Choice == 'c')
	{
		cout << "Enter radius (double): ";
		double Radius = 0.0;
		cin >> Radius;

		cout << "Sphere area is " << Area(Radius) << endl;
	}
	else if (Choice == 'h')
	{
		cout << "Enter radius (double): ";
		double Radius = 0.0;
		cin >> Radius;
		cout << "Enter height (double): ";
		double Height = 0.0;
		cin >> Height;

		cout << "Cylinder area is " << Area(Radius, Height) << endl;
	}
	else
	{
		cout << "Wrong input.";
	}
}

double Area(double Radius)
{
	return (4 * 3.1415 * Radius * Radius * Radius) / 3;
}

double Area(double Radius, double Height)
{
	return 3.1415 * Radius * Radius * Height;
}