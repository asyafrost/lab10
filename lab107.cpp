// lab107.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите длины сторон треугольника:" << endl;
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Существует треугольник со сторонами a, b, c";
    }
    else
    {
        cout << "Треугольник со сторонами a, b, c НЕ существует";
    }
}

