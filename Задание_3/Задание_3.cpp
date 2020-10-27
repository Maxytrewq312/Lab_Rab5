// Задание_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int one, two, three;
	setlocale(0, "");
	cout << "Введите перове число: ";
	cin >> one;
	cout << "Введите второе число: ";
	cin >> two;
	cout << "Введите третье число: ";
	cin >> three;
	double sar = (one + two + three) / 3;
	cout << "Среднее арифметическое трёх чисел: " << sar;
	return 0;
}
