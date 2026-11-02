#include <iostream>
using namespace std;
int tablica[1000][1000];
static void z1() {
    int n;
    int suma_przekatnych = 0;
    cout << "podaj wymiar macierzy kwadratowej" << endl;
    cin >> n;
    for (int w = 0;w < n;w++) {
        for (int k = 0; k < n;k++) {
            cout << "podaj [" << w+1 << "][" << k+1 << "] element tablicy" << endl;
            cin >> tablica[w][k];
            if (w == k) suma_przekatnych += tablica[w][k];
            if (w + k == n - 1) suma_przekatnych += tablica[w][k];
        }
    }
    cout << suma_przekatnych << endl;
}
int tablica2[1000][1000];
static void z2() {
    int n;
    int m;
    int x;
    cout << "podaj liczbe wierszy macierzy kwadratowej" << endl;
    cin >> n;
    cout << "podaj liczbe kolumn macierzy kwadratowej" << endl;
    cin >> m;
    cout << "podaj x" << endl;
    cin >> x;
    for (int w = 0;w < n;w++) {
        for (int k = 0; k < m;k++) {
            cout << "podaj [" << w + 1 << "][" << k + 1 << "] element tablicy" << endl;
            cin >> tablica[w][k];
        }
    }
    for (int w = 0;w < n;w++) {
        for (int k = 0; k < m;k++)
            if (tablica[w][k] == x) cout << "tablice [" << w + 1 << "][" << k + 1 << "]" << endl;
    }

}
int main()
{
    //z1();
    z2();
    return 0;
}

