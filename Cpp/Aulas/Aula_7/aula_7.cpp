#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = ""; // Esta é uma forma de inicializar uma string.
    cout << "Diga o seu primeiro nome: ";
    cin >> str1;
    string str2(""); // Esta é outra forma de inicializar uma string.
    cout << "Diga o seu ultimo nome: ";
    cin >> str2;
    string str3; // Esta também é uma forma de inicializar uma string mas sem colocar nenhum valor.

    str3 = "Oi"; // Esta é uma forma de mudar o valor de uma string.

    string name = str1 + " " + str2; // Isto é uma concatenação (Juntar mas não somar por exemplo 2 + 2 = 22, isto é concatenar).
    
    int l = str1.length(); // O .length() é o comprimento de uma string.

    cout << str3 << " " << name << " o seu primeiro nome tem " << l << " letras.";
    return 0;
}
