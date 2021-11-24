
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b, c;
	cout << "Введите три целых числа (А, В, С):" << endl;
	cin >> a >> b >> c;
	if (a < b && b < c)
	{
		cout << "Справедливо двойное неравенство A < B < C";
	}
	else
	{
		cout << "Выражение A < B < C неверно";
	}
	return 0;
}
