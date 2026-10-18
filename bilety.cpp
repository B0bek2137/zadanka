#include <iostream>
#include <string>
using namespace std;
int wiek;
string dzien_tygodnia;
double cena_biletu(int wiek, string dzien_tygodnia)
{
	double wynik;
	if (wiek <= 5)
		wynik = 0;
	else if (wiek <= 12)
		wynik = 10;
	else if (wiek <= 17)
		wynik = 15;
	else wynik = 25;
	if (dzien_tygodnia == "sroda")
		wynik = wynik - 0.2 * wynik;
	return wynik;
}
int main() {
	cout << "podaj wiek" << endl;
	cin >> wiek;
	cout << "podaj dzien tygodnia" << endl;
	cin >> dzien_tygodnia;
	cout << cena_biletu(wiek, dzien_tygodnia) << endl;
	return 0;
}