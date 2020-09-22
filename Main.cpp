#include <iostream>
#include "Excercises5-6.cpp"
#include "Exercise_7_1.cpp"
#include "Exercise_7_2.cpp"
#include "Exercise_7_5.cpp"
#include "Exercise_8.cpp"

int main()
{
	using namespace std;

	unsigned short ExerciseNumber = 0;
	unsigned short ExerciseItem = 0;
	
	//Возврат при неправильном выборе
	SelectExercise:

	cout << "Run excercise No. (0 to quit): " << endl;
	cin >> ExerciseNumber;

	if (ExerciseNumber == 0)
		return 0;

	cout << "Run excercise " << ExerciseNumber << " item (0 to quit): " << endl;
	cin >> ExerciseItem;

	if (ExerciseItem == 0)
		return 0;

	switch (ExerciseNumber)
	{
	case 5:
		exercise_5();
		break;
	case 6:
		switch (ExerciseItem)
			{
		case 1:
			exercise_6_1();
			break;
		case 2:
			exercise_6_2();
			break;
		case 3:
			exercise_6_3();
			break;
		case 4:
			exercise_6_4();
			break;
		default:
			cout << "Wrong input, try again" << endl;
			goto SelectExercise;
			}
		break;
	case 7:
		switch (ExerciseItem)
		{
		case 1:
			exercise_7_1();
			break;
		case 2:
			exercise_7_2();
			break;
		case 5:
			exercise_7_5();
			break;
		default:
			cout << "Wrong input, try again" << endl;
			goto SelectExercise;
		}
		break;
	case 8:
		switch (ExerciseItem)
		{
		case 1:
			exercise_8_1();
			break;
		case 2:
			exercise_8_2();
			break;
		default:
			cout << "Wrong input, try again" << endl;
			goto SelectExercise;
		}
		break;
	default:
		cout << "Wrong input, try again" << endl;
		goto SelectExercise;
	}

	return 0;
}