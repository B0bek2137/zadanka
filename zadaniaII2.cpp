#include <iostream>

using namespace std;

static void z1() {
    int liczba;
    int wynik = 0;
    cout << "podaj liczbe nieujemna calkowita: ";
    cin >> liczba;
    do {
        wynik++;
        liczba /= 10;
    } while (liczba >0);

    cout << "liczba ma " << wynik << " cyfr" << endl;
}
static void z2() {
    int liczba;
    cout << "podaj liczbe nieujemna calkowita: ";
    cin >> liczba;
    int wynik = 0;
    do {
        wynik += liczba % 10;
        liczba /= 10;
    } while (liczba > 0);
    cout << wynik << endl;
}
static void z3() {
    int liczba;
    cout << "podaj liczbe nieujemna calkowita: ";
    cin >> liczba;
    int liczba_dzielnych = 0;
    int wynik = 1;
    int suma = 0;
    for (wynik; wynik <= liczba; wynik++) {
        if (wynik % 3 == 0 and wynik % 5 == 0) {
        suma += wynik;
        liczba_dzielnych++;}
    }
    cout << suma << endl;
    cout << liczba_dzielnych << endl;
}
static void z4() {
    int tajna_liczba = 37;
    int liczba;
    int liczba_prob = 0; 
do {
    cout << "podaj liczbe nieujemna calkowita: ";
    cin >> liczba;
    liczba_prob++; 

    if (liczba < tajna_liczba) {
        cout << "wiecej" << endl;
    }
    else if (liczba > tajna_liczba) {
        cout << "mniej" << endl;
    }
} while (liczba != tajna_liczba);

cout << "udalo ci sie za " << liczba_prob << " razem!" << endl;
}
int main() {
    //z1();
    //z2();
    //z3();
    z4();
    return 0;
}