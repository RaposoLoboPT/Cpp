#include <iostream>
using namespace std;

int main()
{
    double tempCelsius;
    cout << "Diga uma temperatura em Celsius: ";
    cin >> tempCelsius;

    double tempFahrenheit = (tempCelsius * 9 / 5) + 32;
    cout << "A temperatura em graus Celsius " << tempCelsius << " em Fahrenheit equivale a " << tempFahrenheit << " graus!"<< endl;
    return 0;
}
