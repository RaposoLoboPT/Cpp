#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Diga um numero inteiro maior que 0: ";
    cin >> num;
    cout << "Contagem regressiva:" << endl;
    do
    {
        cout << num << endl;
        num--;
    } while (num > 0);
    
    return 0;
}
