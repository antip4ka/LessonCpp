// Lesson1.4.cpp : S1.4. Составить программу вывода на экран числа, вводимого с клавиатуры. После выводимого числа должно следовать сообщение » — вот какое число Вы  ввели».
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Insert number!\n";
    double a;
    cin >> a;
    cout << a << " - Your number!" << endl;
}
