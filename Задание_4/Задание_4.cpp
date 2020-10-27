// Задание_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	double const PI = 3.141592653589793;
	double R;
	cout << "Введите радиус: ";
	cin >> R;
	double S = PI * (R * R);
	cout << "Площадь круга равна: " << S;
	return 0;
}

