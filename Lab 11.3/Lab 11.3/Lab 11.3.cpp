//Завдання 1 варіант 13 
//Заповнити сектори матрицi, якi лежать вище i нижче вiд головної та бiчної дiагоналей, значеннями
//вектора b1, b2, ..., b32, вiд лiвого верхньго кута вправо - вниз.Решта матрицi*/

#include<iostream>
#include<ctime>
#include<Windows.h>




using namespace std;

int main()
{
    srand(time(NULL));

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a, b, size = 0, i = 0, c = 0, max = 0, min = 0, x;

    size = rand() % 300 + 1;
    int* arr = new int[size];

    for (int start = 0;; start++)
    {
        a = rand() % 401 - 200;
        b = rand() % 401 - 200;

        c = abs(b - a);

        if ((a < b) && (c >= size))
        {
            break;
        }
    }

    for (i; i < size; i++)
    {

        arr[i] = rand() % 401 - 200;

        if ((arr[i] >= a) && (arr[i] <= b))
        {

            cout << arr[i] << " ";
        }
        else { i--; }
    }

    cout << endl;


    for (i; i < size; i++)
    {
        if (arr[i] > 0)
        {
            min = i;
            max = i;
            break;
        }
    }

    i = 0;

    for (int i = 0; i < size - 1; i++)
    {

        if (arr[i] > 0)
        {
            for (int j = i + 1; j < size; j++)
                if (arr[j] > 0)
                {
                    if ((arr[j] > arr[max]))
                    {
                        max = j;
                    }

                    if ((arr[j] < arr[min]))
                    {
                        min = j;
                    }

                }
        }
    }

    swap(arr[min], arr[max]);

    i = 0;
    for (i; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;
}

Тимур 🤗, [07.12.2022 14:18]
#include <iostream>
#include<Windows.h>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;
    cout << "Введіть розміоність матриці:  ";
    cin >> N;


    int** arr = new int* [N];
    for (int i = 0; i < N; i++) {
        arr[i] = new int[N];
    }

    int init = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            arr[i][j] = init;
            init++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << endl;

        if (i % 2 == 0)
        {
            for (int j = 0; j < N; j++)
            {

                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = N - 1; j >= 0; j--)
            {

                cout << arr[i][j] << " ";
            }
        }
    }
    delete[] arr;


}