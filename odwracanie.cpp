#include <iostream>
using namespace std;
int tablica[1000];
int tablica_tymczasowa[1000];
void odwracanie(int tablica[], int rozmiar, int tablica_tymczasowa[]) {
    for (int i = 0; i < rozmiar; ++i) {
        if (i == 0) tablica_tymczasowa[i] = tablica[rozmiar-1];
        else if (i == rozmiar-1) tablica_tymczasowa[i] = tablica[0];
        else tablica_tymczasowa[i] = tablica[rozmiar - 1 - i];
    }
    for (int i = 0; i < rozmiar; ++i) {
        cout << tablica_tymczasowa[i];
    }
}
int main()
{
    int rozmiar;<< "podaj rozmiar tablicy" << endl;
    cin >> rozmiar;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "podaj " << i + 1 << " element tablicy" << endl;
        cin >> tablica[i];
    }
   odwracanie(tablica, rozmiar, tablica_tymczasowa);
    return 0;
}


    cout 