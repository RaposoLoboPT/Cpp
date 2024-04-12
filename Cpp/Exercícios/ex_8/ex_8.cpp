#include <iostream>
#include <string>
#include <cctype>
using namespace std;

double addition(double a, double b)
{
    return a + b;
}

double subtraction(double a, double b)
{
    return a - b;
}

double multiplication(double a, double b)
{
    return a * b;
}

double division(double a, double b)
{
    return a / b;
}

double exponentiation(double a, double b)
{
    for (int i = 1; i < b; i++)
    {
        a *= a;
    }
    
    return a;
}

int main()
{
    string oper;
    cout << "Qual operacao pretende realizar? (addition, subtraction, multiplication, division ou exponentiation): ";
    cin >> oper;

    for (char &low : oper)
    {
        low = tolower(low);
    }
    

    double num1;
    cout << "Diga um numero: ";
    cin >> num1;

    double num2;
    cout << "Diga outro numero: ";
    cin >> num2;

    if (oper == "addition")
    {
        cout << "O resultado da operacao e " << addition(num1, num2) << "." << endl;
    }
    else if (oper == "subtraction")
    {
        cout << "O resultado da operacao e " << subtraction(num1, num2) << "." << endl;
    }
    else if (oper == "multiplication")
    {
        cout << "O resultado da operacao e " << multiplication(num1, num2) << "." << endl;
    }
    else if (oper == "division")
    {
        cout << "O resultado da operacao e " << division(num1, num2) << "." << endl;
    }
    else if (oper == "exponentiation")
    {
        cout << "O resultado da operacao e " << exponentiation(num1, num2) << "." << endl;
    }
    else
    {
        cout << "[ERROR] operador nao identificado! Tente novamente." << endl;
    }
    return 0;
}
