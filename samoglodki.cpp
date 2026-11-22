#include <string>
#include <iostream>
using namespace std;
string samogloski2 = "aeiouyAEIOUY";
int samogloski1(const string& napis) {
    int licznik = 0;
    for (char c : napis) {
        for (char s : samogloski2) {
            if (c == s) licznik++; 
           
        }
    }
    return licznik;
    }

int main()
{
    string tekst;
    getline(cin, tekst);
    cout << samogloski1(tekst) << "\n";
    return  0;
}

