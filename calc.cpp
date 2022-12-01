#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int Num1, Num2, Sum, Razn, Del, Umn;

    string sign;
    cout << ("Введите первое число: ");
    cin >> Num1;
    cout << ("Введите второе число: ");
    cin >> Num2;
    cout << ("Что вы хотите сделать? *; +; -; / ") << endl;
    cin >> sign;
    if (sign == "+") {
        Sum = Num1 + Num2;
        cout << "Результат суммы: " << Sum << endl;
    }
    else if (sign == "-") {
        Razn = Num1 - Num2;
        cout << "Результат вычитания: " << Razn << endl;
    }
    else if (sign == "*") {
        Umn = Num1 * Num2;
        cout << "Результат умножения: " << Umn << endl;
    }
    else if (sign == "/") {
        Del = Num1 / Num2;
        cout << "Результат деления: " << Del << endl;
    }
}