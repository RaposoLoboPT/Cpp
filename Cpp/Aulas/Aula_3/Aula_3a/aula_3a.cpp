#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout << "Diga um valor: ";
    cin >> num1;
    cout << "Diga outro valor: ";
    cin >> num2;

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; // O + é o operador de adição.
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl; // O - é o operador de subtração.
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl; // O * é o operador de multiplicação.
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl; // A / é a operadora de divisão.
    return 0;
}
