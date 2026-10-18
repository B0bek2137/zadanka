#include <iostream>
#include <string>
using namespace std;
int main(){
double saldo = 1000;
string operacja;
cout << "wybierz operacje" << endl;
cin >> operacja; 
if (operacja == "wyplata")
{
	double kwota_wyplaty;
		cout << "ile chcesz wyplacic?" << endl;
	cin >> kwota_wyplaty;
	if (kwota_wyplaty <= saldo)
		cout << "mozna wyplacic";
	else cout << "brak wystarczajacych srodkow na koncie";
}
if (operacja == "wplata")
{
	int wplata;
	cout << "ile chcesz wplacic?" << endl;
	cin >> wplata; 
	saldo += wplata;
}
if (operacja == "sprawdzic")
cout << saldo << endl;
return 0;
}