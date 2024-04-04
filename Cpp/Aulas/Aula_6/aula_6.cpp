#include <iostream>
using namespace std;

int main()
{
    int myArray[5]; // Esta é uma forma de iniciar um array.

    myArray[0] = 20; // Esta é uma forma de colocar um valor num dos espaços do array. Os array começam sempre por 0.
    myArray[1] = 40;
    myArray[2] = 60;
    myArray[3] = 80;
    myArray[4] = 100;

    int otherArray[5] = {10, 20, 30, 40, 50}; // Esta é outra forma de iniciar um array, em que podemos colocar os valores diretamente no array.

    cout << "Elementos do 'myArray':" << endl;
    for (int i = 0; i < 5; i++) // É assim que se mostra os elementos de um array
    {
        cout << myArray[i] << endl;
    }

    cout << "Elementos do 'otherArray':" << endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << otherArray[i] << endl;
    }
    return 0;
}
