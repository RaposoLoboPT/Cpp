#include <iostream>
using namespace std;

int addDigits(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return n % 10 + addDigits(n / 10);
    }
}

int main()
{
    int num;
    cout << "Diga um numero: ";
    cin >> num;

    cout << "A soma de todos os digitos e " << addDigits(num) << endl;
    return 0;
}
