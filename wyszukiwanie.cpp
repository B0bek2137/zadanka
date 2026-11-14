#include <iostream>
using namespace std;
int tablica[1000];
int tablica_tymczasowa[1000];
void wyszukiwanie(int tablica[], int rozmiar, int liczba) {
    int wynik = 0;
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] == liczba) {
            cout << "liczba pojawia sie w " << i + 1 << " miejscu w tabeli" << endl;
            wynik++;
        }
        if (wynik == 0) cout << "liczba nie występuje;"
}
int main()
{
    int liczba;
    int rozmiar;
    cout << "podaj rozmiar tablicy" << endl;
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "podaj " << i + 1 << " element tablicy" << endl;
        cin >> tablica[i];
    }
    cout << "podaj liczbe";
    cin >> liczba;

   //odwracanie(tablica, rozmiar, tablica_tymczasowa);
    return 0;
}


    cout 