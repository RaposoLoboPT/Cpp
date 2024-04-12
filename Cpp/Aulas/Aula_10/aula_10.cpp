#include <iostream>
using namespace std;

struct person // Isto é uma estrutura.  As estruturas são utilizadas para agrupar diferentes tipos de dados relacionados em uma única entidade.
{
    string name;
    int age;
    float weight;
};

void printPerson(person p) // O void é uma palavra-chave que indica ausência de tipo.
{
    cout << "Ola eu sou o/a " << p.name << "." << endl;
    cout << "Eu tenho " << p.age << " anos." << endl;
    cout << "Eu peso " << p.weight << "Kg." << endl;
}

int main()
{
    person person_1; // Chama a estrutura.
    cout << "Diga o seu nome: ";
    getline(cin, person_1.name); // A função "getline" é usada para ler uma linha inteira de texto.

    cout << "Diga a sua idade: ";
    cin >> person_1.age;

    cout << "Diga o seu peso: ";
    cin >> person_1.weight;

    printPerson(person_1);
    return 0;
}
