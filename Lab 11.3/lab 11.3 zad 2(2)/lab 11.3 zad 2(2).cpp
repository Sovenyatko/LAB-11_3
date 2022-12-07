//Завдання 2 пункт 2 варіант 13
//2. Знайти добуток елементів матриці, що знаходяться на головній діагоналі матриці.

#include <iostream>
#include<Windows.h>
#include<iomanip>
#include <ctime>

using namespace std;

void Initialization(int** x, int n)
{
    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x[i][j] = rand() % 50 - 20;
        }
    }
}

void Seredne(int** x, int n)
{
    float seredne = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                seredne += x[i][j];
            }
        }
    }
    cout << "Середнє арифметичне на головній діагоналі: " << seredne / n;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int N;

    cout << "Число N = ";
    cin >> N;

    int** arr = new int* [N];

    for (int i = 0; i < N; i++)
    {
        arr[i] = new int[N];
    }

    Initialization(arr, N);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }

    Seredne(arr, N);
    cout << endl;

    float seredne = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                seredne += arr[i][j];
            }
        }
    }

    int index = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[0][i] < seredne / N)
        {
            index++;
        }
    }

    cout << "Кількість елементів у першому рядку, менших цього середнього арифметичного: " << index << endl;

    for (int i = 0; i < N; i++)
    {
        delete[] arr[i];
        delete[] arr;
    }
}