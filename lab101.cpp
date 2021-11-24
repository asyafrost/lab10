
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа А и В:" << endl;
	cin >> a >> b;
	if (a > 2 && b <= 3)
	{
		cout << "Справедливы неравенства А>2 и B<=3";
	}
	else
	{
		cout << "Высказывание неверно";
	}
	return 0;
}
