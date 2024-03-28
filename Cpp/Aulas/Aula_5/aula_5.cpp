#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++) // O loop for é utilizado quando se sabe exatamente quantas vezes o código precisa ser repetido.
    {
        cout << i << endl;
    }
    double num;
    cout << "Diga um numero para ver a sua tabuada: ";
    cin >> num;
    int c = 1;
    while (c <= 10) // O loop while é utilizado quando a condição de repetição não é conhecida antecipadamente
    {
        cout << num << " * " << c << " = " << num * c << endl;
        c++;
    }
    // existe também o do-while que é semelhante ao while, mas garante que o bloco de código seja executado pelo menos uma vez, mesmo se a condição for falsa inicialmente.

    return 0;
}
