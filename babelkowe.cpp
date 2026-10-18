#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Podaj pierwsza liczbe: " << endl;
    cin >> a;
    cout << "Podaj druga liczbe: " << endl;
    cin >> b;
    cout << "Podaj trzecia liczbe: " << endl;
    cin >> c;

    // Sprawdzamy i zamieniamy miejscami tak, aby 'a' było największe, a 'c' najmniejsze
    if (a < b) { int temp = a; a = b; b = temp; }
    if (a < c) { int temp = a; a = c; c = temp; }
    if (b < c) { int temp = b; b = c; c = temp; }

    // Wypisujemy posortowane liczby od największej do najmniejszej
    cout << "Posortowane liczby: " << a << " " << b << " " << c << endl;

    return 0;
}