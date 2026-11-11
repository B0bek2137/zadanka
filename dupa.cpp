#include <iostream>
using namespace std;
double kalkulator(char znak, double liczba1, double liczba2) {
	switch (znak) {
	case  '+': return liczba1 + liczba2;
	case '-': return liczba1 - liczba2;
	case '/': if (liczba2 == 0) {
		cout << "popierdolilo cie"; break;
		return liczba1 / liczba2;
	}
	case'*': return liczba1 * liczba2;
	default: cout << "popierdolilo cie"; break;

}
}
bool parzystosc(int liczba) {
	if (liczba % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
int najwieksza (int liczba1, int liczba2, int liczba3) {
	if (liczba1 > liczba2 and liczba1 > liczba3) return liczba1;
	else if (liczba2 > liczba1 and liczba2 > liczba3) return liczba2;
	else return liczba3;
}
int silniait(int liczba) {
	int wynik = 1;
	if (liczba == 0 or liczba == 1) return 1;
	for (int i = 1; i <= liczba; ++i)
		wynik *= i;
	return wynik;
}
int main()
{
	cout << kalkulator('+', 1, 2);
	cout << parzystosc(2);
	cout << najwieksza(1, 2, 3);
	cout << silniait(3);
	return 0;
}

