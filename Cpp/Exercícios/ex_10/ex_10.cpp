#include <iostream>
using namespace std;

struct book
{
    string title;
    string authorName;
    int publicationYear;
    int numberOfPages;
};

void printBook(book b)
{
    cout << "Titulo do livro: " << b.title << endl;
    cout << "Nome do autor: " << b.authorName << endl;
    cout << "Ano de publicacao: " << b.publicationYear << endl;
    cout << "Numero de paginas: " << b.numberOfPages << endl;
    cout << endl;
}

int main()
{
    book b[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Por favor coloque as seguintes informacoes sobre o livro " << i+1 << endl;

        cout << "Diga o titulo do livro: ";
        getline(cin, b[i].title);

        cout << "Diga o nome do autor do livro: ";
        getline(cin, b[i].authorName);

        cout << "Diga o ano da publicacao do livro: ";
        cin >> b[i].publicationYear;
        cin.ignore();

        cout << "Diga o numero de paginas do livro: ";
        cin >> b[i].numberOfPages;
        cin.ignore();

        cout << endl;

        printBook(b[i]);
    }

    return 0;
}
