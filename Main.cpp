#include <iostream>
#include "Excercises.cpp"

int main()
{
	using namespace std;

	unsigned short ExerciseNumber = 0;
	unsigned short ExerciseItem = 0;

	cout << "Run excercise No.: " << endl;
	cin >> ExerciseNumber;

	cout << "Run excercise " << ExerciseNumber << " item: " << endl;
	cin >> ExerciseItem;

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
		  }
		  break;
	}
	return 0;
}