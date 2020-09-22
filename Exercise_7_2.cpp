#include <iostream>
#include <vector>

using namespace std;

inline void DisplayArray(vector<double> Array)
{
	for (int i = 0; i < Array.size(); i++)
		cout << Array[i] << endl;
}

static void exercise_7_2()
{
	vector<double> DArray (0);

	cout << "How many numbers do you want in array?: ";
	int DArrayCount = 0;
	cin >> DArrayCount;

	for (int i = 0; i < DArrayCount; i++)
	{
		DArray.push_back((rand() % 100) / 2.7);
	}
	DisplayArray(DArray);
}