#include <iostream>
#include <string>
using namespace std;
string swiatla;
bool karetka;
bool pieszy;
string stan_swiatel(string swiatla, bool karetka, bool pieszy)
{
	string wynik = "";
	if (swiatla == "zielone" and pieszy == 1)
		wynik = "przejezdzam ustepujac pieszemu";
	else if (swiatla == "zielone" and pieszy == 0 and karetka == 0)
			wynik = "przejezdzam ";
	else if (swiatla == "zielone" and karetka == 1 and pieszy == 0)
		wynik = "przejezdzam po puszczeniu pojazdu uprzywilejowanego";
	else if (swiatla == "zielone" and karetka == 1 and pieszy == 1)
		wynik = "przejezdzam po puszczeniu pojazdu uprzywilejowanego i pieszego";
	else if (swiatla == "czerwone")
			wynik = "zatrzymuje sie";
	else if (swiatla == "zolte")
			wynik = "zatrzymuje sie jesli mozna to zrobic bezpiecznie";
	else if (swiatla == "awaria")
		wynik = ("przejezdzam zachowujac szczegolna ostroznosc");
	return wynik;



}
int main()
{
	cout << "jaki jest kolor swiatel?" << endl;
	cin >> swiatla;
	cout << "czy jest pojazd uprzywilejowany?" << endl;
	cin >> karetka;
	cout << "czy jest pieszy?" << endl;
	cin >> pieszy;
	cout << stan_swiatel(swiatla, karetka, pieszy) << endl;
	return 0;
}
