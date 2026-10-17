#include <string>
#include <iostream>
using namespace std;
int kwota;
int saldo;
bool status;
string transakcja(int kwota, int saldo, bool status) 
{
	string wynik;
	if (kwota < 0 or saldo - kwota < 0 or kwota > 20000 or status == 0)
	wynik = "nie mozna dokonac transakcji";
	else if (kwota <= 1000)
		wynik = "transakcja przejdzie bez komplikacji";
	else if (kwota <= 5000)
		wynik = "transakcja wymaga sms";
	else if (kwota > 5000)
		wynik = "transakcja wymaga dodatkowo statusu zaufaneog urzadzenia";
	return wynik;
}


int main()
{
	cout << "podaj kwote transakcji" << endl;
	cin >> kwota;
	cout << "podaj saldo konta" << endl;
	cin >> saldo;
	cout << "podaj status karty" << endl;
	cin >> status;
	cout << transakcja(kwota, saldo, status) << endl;
	return 0;
}