// Lesson1.8.cpp : S1.8. Составить программу вывода на экран в одну строку четырех любых чисел  с одним пробелом между ними.
//

#include <iostream>

using namespace std;

int main()
{
    cout << "Insert four number\n";
    cout << "a = ";
    double a;
    cin >> a;
    cout << "b = ";
    double b;
    cin >> b;
    cout << "c = ";
    double c;
    cin >> c;
    cout << "d = ";
    double d;
    cin >> d;
    cout << "Your numbers: " << a << " " << b << " " << c << " " << d;
}


