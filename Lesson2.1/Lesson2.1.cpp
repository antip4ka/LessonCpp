// Lesson2.1.cpp : S2.1. Составить программу:
//а) вычисления значения функции y = 7x2 + 3x + 6 при любом значении x;
//б) вычисления значения функции x = 12a2 + 7a + 12 при любом значении а.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Enter x\n";
    double x;
    cin >> x;
    cout << "Enter a\n";
    double a;
    cin >> a;
    double y;
    y = 7 * (x * x) + 3 * x + 6;
    double z;
    z = 12 * (a * a) + 7 * a + 12;
    cout << "y = " << y << "\n";
    cout << "x = " << z << "\n";
}

