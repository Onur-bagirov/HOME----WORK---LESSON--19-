#include <iostream>

using namespace std;

// Funksiyalar

//========================================================

void ArrayOneRandom(int array[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }
}

void ShowArrayOne(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }
}

//========================================================

void ArrayOneRandom(float array[], int size)
{
    srand(time(NULL));


    for (int i = 0; i < size; i++)
    {
        float _num_one = (float)(rand() % 1010) / 10;
        array[i] = (float)_num_one;
    }
}

void ShowArrayOne(float array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }
}

//========================================================

void ArrayOneRandom(double array[], int size)
{
    srand(time(NULL));


    for (int i = 0; i < size; i++)
    {
        double num_one_ = (double)(rand() % 1010) / 10;
        array[i] = (double)num_one_;
    }
}

void ShowArrayOne(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }

}

//========================================================

void ArrayOneRandom(char array[], int size)
{
    srand(time(NULL));


    for (int i = 0; i < size; i++)
    {
        char num_one = (char)(rand() % 101);
        array[i] = (char)num_one;
    }
}

void ShowArrayOne(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }
}

//========================================================

void randomArrayTwo(int array[], int size, int min, int max)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = min + rand() % (max - min + 1);
    }
}

void showArrayTwo(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ",";
    }
    cout << endl;
}

//========================================================


void bubbleArrayFour(int array[], int size, bool true_false)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (true_false)
            {
                if (array[j] > array[j + 1])
                {
                    int num_four = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = num_four;
                }
            }
            else
            {
                if (array[j] < array[j + 1])
                {
                    int num_four = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = num_four;
                }
            }
        }
    }
}


//========================================================

void arrayMinNumber(int array[], int size)
{
    int minnumber = array[0];

    for (int i = 1; i < size; ++i)
    {
        if (array[i] < minnumber)
        {
            minnumber = array[i];
        }
    }

    cout << "Min number : " << minnumber << endl;
}

//========================================================

void arrayMaxNumber(int array[], int size) {
    int maxnumber = array[0];

    for (int i = 1; i < size; ++i)
    {
        if (array[i] > maxnumber)
        {
            maxnumber = array[i];
        }
    }

    cout << "Max number : " << maxnumber << endl;
}

//========================================================

void RandomNumber(int array[], int size)
{
    srand(time(NULL));

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }
}

void arrayChangeNumber(int array[], int size, int num_five)
{

    for (int i =  size - num_five; i < size; i++)
    {
        cout << array[i] << ",";
    }
    for (int i = 0; i < size - num_five; i++)
    {
        cout << array[i] << ",";
    }
}

//========================================================

int main()
{
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 1 - 3";
    cout << "\n\n\n\n";

    int arrayOnesizeint[10] = {};
    char arrayOnesizechar[10] = {};
    float arrayOnesizefloat[10] = {};
    double arrayOnesizeDouble[10] = {};
    cout << "Array : ";

    ArrayOneRandom(arrayOnesizeint, 10);
    ShowArrayOne(arrayOnesizeint, 10);

    ArrayOneRandom(arrayOnesizeDouble, 10);
    ShowArrayOne(arrayOnesizeDouble, 10);

    ArrayOneRandom(arrayOnesizefloat, 10);
    ShowArrayOne(arrayOnesizefloat, 10);

    ArrayOneRandom(arrayOnesizechar, 10);
    ShowArrayOne(arrayOnesizechar, 10);


    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    int arrayTwoSize[10] = {};
    int min_num_two;
    int max_num_two;

    cout << "Enter min number : ";
    cin >> min_num_two;

    cout << "Enter max number : ";
    cin >> max_num_two;

    cout << "Array: ";

    randomArrayTwo(arrayTwoSize, 10, min_num_two, max_num_two);
    showArrayTwo(arrayTwoSize, 10);

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    int arrayFourSize[10] = {};

    cout << "True - 1" << endl;
    cout << "False - 0" << endl;

    int choice;

    cout << "Enter choice: ";
    cin >> choice;

    cout << "Array : ";

    bubbleArrayFour(arrayFourSize, 10, choice);
    showArrayTwo(arrayFourSize, 10);


    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 6";
    cout << "\n\n\n\n";

    int array[10] = {};
    int size = sizeof(array) / sizeof(array[0]);

    srand(time(0));

    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
    }

    cout << "Array : ";

    showArrayTwo(array, size);
    arrayMinNumber(array, size);

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 7";
    cout << "\n\n\n\n";

    int array_seven[10] = {};
    int size_seven = sizeof(array_seven) / sizeof(array_seven[0]);

    srand(time(0));

    for (int i = 0; i < size_seven; ++i)
    {
        array_seven[i] = rand() % 100;
    }

    cout << "Array : ";

    showArrayTwo(array_seven, size_seven);
    arrayMaxNumber(array_seven, size_seven);

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "================================";
    cout << "\n\n";
    cout << "Tap - 8";
    cout << "\n\n\n\n";

    int arrayEighrSize[10] = {};
    int numberEight;

    cout << "Enter number : ";
    cin >> numberEight;


    RandomNumber(arrayEighrSize, 5);

    cout << "Orginal Array : ";
    showArrayTwo(arrayEighrSize, 5);


    cout << "Change Array : ";
    arrayChangeNumber(arrayEighrSize, 5,numberEight);
}
