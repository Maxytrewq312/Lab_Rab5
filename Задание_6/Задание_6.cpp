// Задание_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	double rastm;
	cout << "Введите растсояние в милях: ";
	cin >> rastm;
	double rastkm = rastm * 1.609;
	double rastf = rastm * 5280.002;
	cout << "Растояние в километрах: " << rastkm;
	cout << "\nРасстояние в футах: " << rastf;
	return 0;
}

