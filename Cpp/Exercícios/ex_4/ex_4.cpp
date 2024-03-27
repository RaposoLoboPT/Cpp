#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Diga um valor: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "O valor e par.";
    }
    else
    {
        cout << "O valor e impar.";
    }
    return 0;
}
