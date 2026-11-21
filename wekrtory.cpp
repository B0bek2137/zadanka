#include <iostream>
#include <string>
#include<vector>
using namespace std;
size_t liczba_znakow( const string& napis) {
    return size(napis);
}
void ocs(const vector<int>& wektor) {
    for (int liczba : wektor) {
        std::cout << liczba << " ";
    }
    cout << '\n';
}
int suma(const vector<int>& wektor) {
    int suma = 0;
    for (int liczba : wektor) {
        suma += liczba;
    }
    return suma;
}
int wystapienie(const string& napis, char znak) {
    int liczba = 0;
        for (char c : napis) {
            if (c == znak) liczba++;
        }
    return liczba;
}
int main()
{
  // cout<< liczba_znakow("chuj");
   // vector<int> liczby = { 10, 20, 30, 40, 50 };
   // cout << suma(liczby);
    cout << wystapienie("cycory", 'c');
    return 0;
}

