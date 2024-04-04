#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cout << "Diga uma palavra: ";
    cin >> word;

    int l = word.length();

    string palindrome;
    for (int i = l - 1; i >= 0; i--)
    {
        palindrome += word[i];
    }
    
    if (palindrome == word)
    {
        cout << "A palavra " << palindrome << " e um palindromo de " << word << "." << endl;
    }
    else
    {
        cout << "A palavra " << palindrome << " nao e um palindromo de " << word  << "." << endl;
    }
    return 0;
}
