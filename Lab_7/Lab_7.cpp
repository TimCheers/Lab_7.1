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


void Foo(int *arr,int size)
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

int Foo(string str, int coun)
{
    int k = 0;
    for (int i = 0; i < coun; i++)
    {
        if (str[i]==*" ")
        {
            k++;
            if (str[i-1]==*" " || str[i - 1] == *"-")
            {
                k--;
            }
        }
    }
    k++;
    return k;
}

int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    string str;
    cout << "Введите предложение" << endl;
    getline(cin, str);
    int coun = str.length();
    int Count = Foo(str, coun);

    int size = -1;
    string type = "слово";
    while (size <= 0)
    {
        cout << "Введите размер массива чисел"<<endl;
        cin >> size;
    }
    int* arr = new int[size];
    while (type != "случайно" && type != "вручную")
    {
        cout << "Введите способ заполнения массива(случайно, вручную)"<<endl;
        cin >> type;
    }
    cout << endl;
    if (type == "случайно")
    {
        cout << "Массив:" << endl;
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
        cout << arr[i] << "\t";
    }
    cout << endl<<endl;
    cout << "Количество нечётных элементов в массиве:  ";
    Foo(arr, size);
    cout << endl << endl << "Количество слов в строке:\t";
    cout << Count<<endl;

}


