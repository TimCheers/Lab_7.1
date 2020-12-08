#include <iostream>
#include<Windows.h>
#include<ctime>
using namespace std;

//Написать перегруженные функции и основную программу,
//которая их вызывает.
//
//22
//а) для массива целых чисел находит количество нечетных
//элементов;
//б) для строки находит количество слов в ней.


int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size=-1;
    string type = "слово";
    while (size<=0)
    {
        cout << "Введите размер массива";
        cin >> size;
    }
    int* arr = new int [size];
    while (type=="слово")
    {
        cout << "Введите способ заполнения массива(случайно, вручную)";
        cin >> size;
    }
    if (type=="случайно")
    {

    }
    
}


