// Lesson1.3.cpp : S1.3. Составить программу вывода на экран числа, вводимого с клавиатуры. Выводимому числу должно предшествовать сообщение «Вы ввели число».

#include <iostream>
using namespace std;
int main()
{
    cout << "Insert number";
    float a;
    cin >> a;
    cout << "Your number: " << a << endl;
}
