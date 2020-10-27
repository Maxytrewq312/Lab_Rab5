// Задание_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
bool palindr(int n)  //функция для провреки числа, явлется ли он паллиндромом
{
    if ((n / 10000 == n % 10) && (n % 10000 / 1000) == (n % 100) / 10)
    { 
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите число" << std::endl;
    cin >> n;
    if (n <= 9999 || n >= 100000)
    {
        cout << "Введите 5-тизначное число" << endl; 
    }
    else
    {
        if (palindr(n))
        { 
            cout << "Число " << n << " Это палиндром" << endl;
        }
        else
        {
            cout << "Число " << n << " Это не палиндром" << endl;
        }
    }
    system("pause");
}

