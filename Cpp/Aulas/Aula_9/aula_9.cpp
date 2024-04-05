#include <iostream>
using namespace std;

double factorial(double n) // Isto é uma função recursiva. As funções recursivas são aquelas que apresentam chamadas, diretas ou indiretas, a si mesmas.
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main(int argc, char const *argv[])
{
    double num;
    cout << "Diga um numero: ";
    cin >> num;

    cout << "O fatorial de " << num << " e " << factorial(num) << endl;
    return 0;
}
