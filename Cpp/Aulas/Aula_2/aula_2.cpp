#include <iostream>
using namespace std;

int main()
{
    int age; // Esta variavel é do tipo primitivo inteiro.
    float wight; // Esta variavel é do tipo primitivo flutuante (decimal).
    char name[50]; // Esta variavel é do tipo char (array).
    double temp; // Esta variavel é do tipo double (decimal com dupla precisão)
    bool isRaining; // Esta variavel é do tipo booleana ("true" ou "false").

    cout << "Diga a sua idade: ";
    cin >> age;
    cout << "Diga o seu peso: ";
    cin >> wight;
    cout << "Diga o seu nome: ";
    cin >> name;
    cout << "Diga a temperatura que esta: ";
    cin >> temp;
    cout << "Esta a chover? (true/false): ";
    cin >> isRaining;

    cout << "Oi " << name << ", tu tens " << age << " anos, tens " << wight << " Kg, esta " << temp << " graus Celsius e " << (isRaining ? "esta" : "nao esta") << " a chover!" << endl; // O (isRaining? "esta" : "nao esta") é um operador ternário (variavel ? true : false).
    return 0;
}
