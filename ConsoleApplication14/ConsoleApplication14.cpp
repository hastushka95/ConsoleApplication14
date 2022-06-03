// ConsoleApplication14.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;

#include <iostream>

int main()
{
    int number, num1,num2 ,num3,num4, num5, num6, summa1, summa2, temp;
    cout << "enter your 6n number: ";
    cin >> number;
    if (number / 100000 < 1) {
        cout << "your number less than 6n";

    }
    else if (number / 100000 > 9) {
        cout << " your number is over ";
    
    }
    else {
        cout << " your number good";
        num6 = number % 10;
        temp = number / 10;
        num5 = temp % 10;
        temp = temp / 10;
        num4 = temp % 10;
        temp = temp / 10;
        num3 = temp % 10;
        temp = temp / 10;
        num2 = temp % 10;
        temp = temp / 10;
        num1 = temp % 10;
        temp = temp / 10;
        cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " " << num6; 
        summa1 = num1 + num2 + num3;
        summa2 = num4 + num5 + num6;
        if (summa1 == summa2) {
            cout << " your number is lucky";
        }
        else {
            cout << " its not lucky ";

        }
    }
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
