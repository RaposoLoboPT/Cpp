#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Diga a quantidade de numeros que quer somar: ";
    cin >> n;

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Diga um numero: ";
        cin >> numbers[i];
    }

    int add = 0;

    for (int i = 0; i < n; i++)
    {
        add += numbers[i];
    }
    

    cout << "O resultado da soma e " << add << "." << endl;
    return 0;
}
