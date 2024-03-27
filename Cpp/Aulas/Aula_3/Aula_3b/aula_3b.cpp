#include <iostream>
using namespace std;

int main()
{
    double num = 0; // O = atribui um valor à variavel, mas não se diz "igual", mas sim "recebe".
    cout << "Diga um valor: ";
    cin >> num;
    cout << "Este foi o valor que escolheste: " << num << endl;
    cout << "Vamos chama-lo de: num" << endl;
    num += 3; // O += é uma forma somar e atribuir de forma mais abreviada.
    cout << "Agora num + 3 = " << num << endl;
    num -= 2; // O -= é semelhante mas para subtrair.
    cout << "Agora num - 2 = " << num << endl;
    num *= 10; // O *= é semelhante mas para multiplicar.
    cout << "Agora num * 10 = " << num << endl;
    num /= 5; // O /= é semelhante mas para dividir.
    cout << "Agora num / 5 = " << num << endl;
    num++; // O ++ é para adicionar 1 à variavel.
    cout << "Agora num++ (incremento) equivale a: " << num << endl;
    num--; // O -- é para subtrair 1 à variavel.
    cout << "Agora num-- (decremento) equivale a: " << num << endl;
    return 0;
}
