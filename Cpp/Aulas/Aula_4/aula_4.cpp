#include <iostream>
using namespace std;

int main()
{
    float num;
    cout << "Diga um valor: ";
    cin >> num;
    if (num >= 100)
    {
        cout << "O valor e maior do que 100.";
    } else 
    {
        cout << "O valor nao e maior do que 100.";
    }
    return 0;
}
