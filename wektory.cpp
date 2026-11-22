
#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> parzyste(vector<int> wektor) {
	vector <int> wektor2;
	for (int liczba : wektor) {
		if (liczba % 2 == 0) {
			wektor2.push_back(liczba);
			}
		}
	return wektor2;
	}

int main()
{
	//vector<int> wektor = {1, 2, 3, 4, 5, 6 };
	//vector<int> wynik = parzyste(wektor);
	//for (int x : wynik) {
		//cout << x << " ";
	//}
	//cout << "\n";

}

