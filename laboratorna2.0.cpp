// Lab_02.cpp
// <Семенчук Крістіна>
// Лабораторна робота № 2
// Лінійні програми.
// Варіант 22
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double alpha; // вхідний параметр
    double z1;    // результат обчислення 1-го 
    double z2;    // результат обчислення 2-го

    cout << "alpha=";
    cin >> alpha;

    cout << "cos(alpha)=" << cos(alpha) << endl;
    cout << "sin(alpha)=" << sin(alpha) << endl;

    z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);
    z2 = 2 * sqrt(2) * cos(alpha) * sin(M_PI / 4 + 2 * alpha);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    cin.get(); 
    return 0;
}
