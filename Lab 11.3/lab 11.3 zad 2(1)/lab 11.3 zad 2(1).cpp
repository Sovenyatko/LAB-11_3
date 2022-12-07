//Завдання 2 пункт 3 варіант 13 
//1. Для кожного стовпця матриці знайти і надрукувати номери рядків, що містять від’ємні елементи.

#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int n = 5;
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 41 - 20;
            cout << setw(4) << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Для кожного стовпця матриці знайти і надрукувати номери рядків, що містять від’ємні елементи: " << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < 0)
            {
                cout << "Рядок: " << i << " Стовпець: " << j << endl;
            }
        }
    }
}