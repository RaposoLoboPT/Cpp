#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

int main()
{
    int num1;
    cout << "Diga um numero: ";
    cin >> num1;

    int num2;
    cout << "Diga outro numero: ";
    cin >> num2;

    cout << "O resultado da soma e " << add(num1, num2) << endl;
    return 0;
}
