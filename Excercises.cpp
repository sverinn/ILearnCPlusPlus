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
    //÷икл for дл€ доступа к элем. массива в обр. пор€дке
    int A[10] = { 0 };

    for (int i = 9; i >= 0; i--)
    {
        A[i] = 2 * i;
        std::cout << A[i] << " ";
    }
}

static void exercise_6_2()
{
    //ќбъ€вить 2 массива и добавить в них элементы в обратном пор€дке использу€ вложенный цикл
    const int ARRAY1_LEN = 3;
    const int ARRAY2_LEN = 2;

    int MyInts1[ARRAY1_LEN] = { 0 };
    int MyInts2[ARRAY2_LEN] = { 0 };

    for (int ArrayIndex1 = 0; ArrayIndex1 < ARRAY1_LEN; ArrayIndex1++)
    {
        for (int ArrayIndex2 = 0; ArrayIndex2 < ARRAY2_LEN; ArrayIndex2++)
        {
            for (int ArrayResultIndex = ARRAY_RESULT_LEN - 1; ArrayResultIndex >= 0; ArrayResultIndex--)
            {
                Results[ArrayResultIndex] = MyInts1[ArrayIndex1] * MyInts2[ArrayIndex2];
                std::cout << Results[(ARRAY_RESULT_LEN - 1) - ArrayResultIndex] << " ";
            }
        }
    }
}

static void exercise_6_3()
{

}

static void exercise_6_4()
{

}

static void exercise_6_5()
{

}