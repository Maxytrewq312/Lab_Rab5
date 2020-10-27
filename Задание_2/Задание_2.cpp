#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(0, "");
    double rad;
    double grad;
    cout << "Введите значение градусов в радианах: ";
    cin >> rad;
    const double PI = 3.141592653589793; // 15 знаков после точки
    grad = (rad * 180) / PI;
    return rad;
    cout << "Значение градусов: " << grad;
    return 0;
}



