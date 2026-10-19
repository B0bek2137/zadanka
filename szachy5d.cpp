
#include <iostream>

#include <string>

using namespace std;

string figura;

int poczatkowy_wiersz;

int poczatkowa_kolumna;

int koncowy_wiersz;

int koncowa_kolumna;

void ruch() {

    int roznica_wierszy = poczatkowy_wiersz - koncowy_wiersz;

    int roznica_kolumn = poczatkowa_kolumna - koncowa_kolumna;

    if (poczatkowy_wiersz < 1 or poczatkowy_wiersz >8 or poczatkowa_kolumna > 8 or poczatkowa_kolumna < 1 or koncowy_wiersz < 1 or koncowy_wiersz > 8 or koncowa_kolumna < 1 or koncowa_kolumna > 8)

        cout << "nie miesci sie na szachownicy" << endl;

    else if (figura == "wieza") {

        if (roznica_wierszy == 0 or roznica_kolumn == 0)
            cout << "ruch dozwolony" << endl;
        else cout << "ruch niedozwolony" << endl;
    }
    else if (figura == "goniec") {
        if ((roznica_kolumn == roznica_wierszy || roznica_kolumn == -roznica_wierszy) && roznica_wierszy != 0)
            cout << "ruch poprawny" << endl;
        else cout << "ruch niepoprawny" << endl;
    }
    else if (figura == "krol") {
        if (((roznica_wierszy >= -1 && roznica_wierszy <= 1) && (roznica_kolumn >= -1 && roznica_kolumn <= 1)) && !(roznica_wierszy == 0 && roznica_kolumn == 0))
            cout << "ruch poprawny" << endl;
        else cout << "ruch niepoprawny" << endl;
    }
    else if (figura == "skoczek") {
        if (((roznica_wierszy == 2 || roznica_wierszy == -2) && (roznica_kolumn == 1 || roznica_kolumn == -1)) ||
            ((roznica_wierszy == 1 || roznica_wierszy == -1) && (roznica_kolumn == 2 || roznica_kolumn == -2)))
            cout << "ruch poprawny" << endl;
        else cout << "ruch niepoprawny" << endl;
    }
}
    int main() {
        cout << "podaj figure" << endl;
        cin >> figura;
        cout << "podaj poczatkowy wiersz" << endl;
        cin >> poczatkowy_wiersz;
        cout << "podaj poczatkowa kolumne" << endl;
        cin >> poczatkowa_kolumna;
        cout << "podaj koncowy wiersz" << endl;
        cin >> koncowy_wiersz;
        cout << "podaj koncowa kolumne" << endl;
        cin >> koncowa_kolumna;
        ruch();
        return 0;
    }
  