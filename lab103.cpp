
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int x;
	cout << "Введите число для проверки: ";
	cin >> x;
	if (x % 2 == 0 && (x / 10) > 0 && (x / 100) == 0)
	{
		cout << "Данное чило является четным и двузначным";
	}
	else
	{
		cout << "Выражение 'Данное чило является четным и двузначным' неверно"<<endl;
	}
	return 0;
}
