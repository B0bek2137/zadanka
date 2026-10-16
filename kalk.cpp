#include <iostream>

using namespace std;

int main()
{
    int pierwsza_liczba;
    cout << "podaj 1 liczbe" << endl;
    cin >> pierwsza_liczba;

    char operatory;
    cout << "podaj operator" << endl;
    cin >> operatory;

    int druga_liczba;
    cout << "podaj 2 liczbe" << endl;
    cin >> druga_liczba;

    int wynik = 0;

    if (operatory == '+') {
        wynik = pierwsza_liczba + druga_liczba;
    }
    else if (operatory == '-') {
        wynik = pierwsza_liczba - druga_liczba;
    }
    else if (operatory == '*') {
        wynik = pierwsza_liczba * druga_liczba;
    }
    else if (operatory == '/') {
        if (druga_liczba != 0) {
            wynik = pierwsza_liczba / druga_liczba;
        } else {
            cout << "Blad: Dzielenie przez zero!" << endl;
        }
    }
    else {
        cout << "Nieznany operator!" << endl;
    }

    cout << "Wynik: " << wynik << endl;

    return 0;
}
