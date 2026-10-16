#include <iostream>

using namespace std;
int porownanie (int a, int b, int c)

{
    int wynik = 0;
if (a > b and a > c)
    wynik = a;
if (b > a and b > c)
    wynik = b;
if (c > a and c > b)
    wynik = c;
return wynik;

}
int main()
{
int a, b, c;
cout << "podaj 1 liczbe" << endl;
cin >> a;
cout << "podaj 2 liczbe" << endl;
cin >> b;
cout << "podaj 3 liczbe" << endl;
cin >> c;
cout << porownanie(a, b ,c)<<endl;
return 0;
}
