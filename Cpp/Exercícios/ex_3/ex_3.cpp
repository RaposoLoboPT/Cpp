#include <iostream>
using namespace std;

int main()
{
    double price, discountPercent;
    cout << "Diga o valor do produto: ";
    cin >> price;
    cout << "Diga a percentagem do desconto: ";
    cin >> discountPercent;
    double discount = price * (discountPercent / 100);
    cout << "Agora o produto custa " << price - discount << " euros." << endl;
    return 0;
}
