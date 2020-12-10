#include <iostream>
#include<Windows.h>
#include<ctime>
#include<string>
using namespace std;

//Написать перегруженные функции и основную программу,
//которая их вызывает.
//
//22
//а) для массива целых чисел находит количество нечетных
//элементов;
//б) для строки находит количество слов в ней.


void odd(int *arr,int size)
{
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2!=0)
        {
            k++;
        }
    }
    cout << k;
}


int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size=-1;
    string type = "слово";
    while (size<=0)
    {
        cout << "Введите размер массива чисел";
        cin >> size;
    }
    int* arr = new int [size];
    while (type!="случайно"&&type!="вручную")
    {
        cout << "Введите способ заполнения массива(случайно, вручную)";
        cin >> type;
    }
    if (type=="случайно")
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = rand() % 20;
        }
    }
    else
    {
        cout << "Введите массив:" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<"\t";
    }
    cout << endl;
    odd(arr, size);
 /*   type = "слово";
    int sizeS=0;
    cout << "Введите предложение:";
    string sentenc;
    cin >> sentenc;
    sizeS = sentenc.length();
    cout << sizeS;*/
}


