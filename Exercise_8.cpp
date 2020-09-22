#include <iostream>

using namespace std;

static void exercise_8_1()
{
	int Number = 3;
	int* pNum1 = &Number;
	*pNum1 = 20;
	int* pNum2 = pNum1;
	Number *= 2;
	cout << *pNum2;
}

static void exercise_8_2()
{
	int* pNumber = new int;
	int* pNumberCopy = pNumber;
	*pNumberCopy = 30;
	cout << *pNumber;
	delete pNumber;
}