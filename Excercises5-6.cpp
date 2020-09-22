#include <iostream>

static void exercise_5()
{
    using namespace std;

    bool Var1 = false;
    bool Var2 = false;

    //Input prompt
    cout << "Enter Var1 (true(1)/false(0)): " << endl;
    cin >> Var1;
    cout << "Enter Var2 (true(1)/false(0)): " << endl;
    cin >> Var2;

    //Operations & output
    cout << "NOT Var1: " << !Var1 << endl;
    cout << "NOT Var2: " << !Var2 << endl;

    cout << "Var1 OR Var2: " << (Var1 || Var2) << endl;
    cout << "Var1 AND Var2: " << (Var1 && Var2) << endl;
    cout << "Var1 XOR Var2: " << (Var1 ^ Var2) << endl;
}

static void exercise_6_1()
{
    //Цикл for для доступа к элем. массива в обр. порядке
    int A[10] = { 0 };

    for (int i = 9; i >= 0; i--)
    {
        A[i] = 2 * i;
        std::cout << A[i] << " ";
    }
}

static void exercise_6_2()
{
    //Объявить 2 массива и сложить их элементы в обратном порядке используя вложенный цикл
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int MyInts1[ARRAY1_LEN] = { 35, -3, 0 };
    int MyInts2[ARRAY2_LEN] = { 20, -1 };

    for (int ArrayIndex1 = ARRAY1_LEN-1; ArrayIndex1 >= 0; ArrayIndex1--)
    {
        for (int ArrayIndex2 = ARRAY2_LEN-1; ArrayIndex2 >= 0; ArrayIndex2--)
        {
            std::cout << "MyInts1[" << ArrayIndex1 << "] + MyInts2[" << ArrayIndex2 << "] = " << MyInts1[ArrayIndex1] + MyInts2[ArrayIndex2] << std::endl;
        }
    }
}

static void exercise_6_3()
{
    //Вывести числа Фибоначчи в количестве, указанном пользователем

    int NumsToCal = 0;
    int Num1 = 0, Num2 = 1;

    std::cout << "How many numbers do you want?" << std::endl;
    std::cin >> NumsToCal;

    std::cout << std::endl << Num1 << " " << Num2 << " ";

    for (int Index = 0; Index < NumsToCal; Index++)
    {
        std::cout << Num1 + Num2 << " ";
        Num2 += Num1;
        Num1 = Num2 - Num1;
    }
}

static void exercise_6_4()
{
    //Написать конструкцию switch-case, проверяющую, есть ли в радуге цвет

    enum RainbowColor
    {
        Red = 0,
        Pink,
        White,
        Orange,
        Yellow,
        Black,
        Green,
        Brown,
        Cyan,
        Blue,
        Lime,
        Purple
    };

    int UserColor = 0;

    std::cout << "Available colors:" << std::endl;
    std::cout << "Red = 0, Pink = 1, White = 2, Orange = 3, Yellow = 4," << std::endl << "Black = 5, Green = 6, Brown = 7,";
    std::cout << "Cyan = 8, Blue = 9, Lime = 10, Purple = 11" << std::endl;

    std::cout << "Enter color: ";
    std::cin >> UserColor;

    switch (UserColor)
    {
    case Red:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    case Orange:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    case Yellow:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    case Green:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    case Cyan:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    case Blue:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    case Purple:
        std::cout << "Rainbow has this color." << std::endl;
        break;
    default:
        std::cout << "No such color in a rainbow." << std::endl;
    }
}