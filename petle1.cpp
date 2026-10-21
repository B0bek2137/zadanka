#include <iostream>
using namespace std;
static void z1() {
    int N;
    cout << "podaj liczbe" << endl;
    cin >> N;
    int pomocnicza = 1;
    while (pomocnicza <= N) {
        cout << pomocnicza;
        ++pomocnicza;
    }
}
static void z2() {
    int N;
    cout << "podaj liczbe" << endl;
    cin >> N;
    int pomocnicza = 0;
    int suma = 0;
    while (pomocnicza <= N) {
        suma += pomocnicza;
        ++pomocnicza;
    }
    cout << suma << endl;
}
static void z3() {
    int N;
    cout << "podaj liczbe" << endl;
    cin >> N;
    int pomocnicza = 0;
    int suma = 0;
    while (pomocnicza <= N) {
        if (pomocnicza % 2 == 0) cout << pomocnicza << " " << endl;
        pomocnicza++;
    }
}
        static void z4() {
            int N;
            cout << "podaj liczbe" << endl;
            cin >> N;
            int pomocnicza = 1;
            while (pomocnicza <= 10) {
                cout << pomocnicza * N << endl;
                pomocnicza += 1;
            }
            }
        
       



int main()
{
    //z1();
    //z2();
   // z3();
    z4();
    return 0;
}

