#include <iostream>
#include "Excercises.cpp"

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
		case 5:
			exercise_6_5();
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