#include <iostream>

using namespace std;

int main()
{
  int wiek;
  cout << "podaj wiek" << endl;
  cin >> wiek;
  int dochod;
  int podatek;
  if (wiek <= 18){
    podatek = 0;
  }
    else {
    cout << "podaj dochod" << endl;
  cin >> dochod;
    if (dochod < 30000)
        podatek = 0;
    else if (30000 <= dochod and dochod <= 80000)
        podatek = 0.12 *(dochod - 30000);
    else
        podatek = 6000 + 0.32 * (dochod - 80000);
    }
    cout << podatek << endl;

return 0;

}
