#include <iostream>
using namespace std;

int main()
{
    float num;
    cout << "Diga um valor: ";
    cin >> num;
    if (num >= 100) // O if como o nome diz "se" é uma condição e serve para se for verdade faz esta coisa.
    {
        cout << "O valor e maior do que 100.";
    } else  // O else como o nome diz "se não" faz se for falso.
    {
        cout << "O valor nao e maior do que 100.";
    }
    return 0;
}
