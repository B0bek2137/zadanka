#include <iostream>
#include <vector>
#include <string>
using namespace std;
int najwieksza(vector<int> wektor) {
	int najwieksza = wektor[0];
	for (int x : wektor) {
		if (x > najwieksza)
		{
			najwieksza = x;
		}
	}
	return najwieksza;
}

int main()
{
	vector<int> wektor = { 1, 2, 3, 4, 5, 6 };
	cout << najwieksza(wektor);

}

