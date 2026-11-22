#include <iostream>
#include <vector>
#include <string>
using namespace std;
string odwracanie(string napis){
	for (int i = 0; i < napis.size()/2; ++i) {
		char tymczasowa = napis[i];
		napis[i] = napis[napis.size() - 1 - i];
		napis[napis.size() - 1 - i] = tymczasowa;
	}
	return napis;
	}

int main()
{
	cout << odwracanie("chu");
	return 0;
}


