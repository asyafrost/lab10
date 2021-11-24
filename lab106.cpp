// lab106.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "Введите три числа - стороны треугольника:"<<endl;
	cin >> a >> b >> c;
	if (a * a == b * b + c * c || c * c == b * b + a * a || b * b == a * a + c * c)
	{
		cout << "Треугольник со сторонами a, b, c является прямоугольным";
	}
	else
	{
		cout << "Треугольник со сторонами a, b, c НЕ является прямоугольным";
	}

	return 0;
}
