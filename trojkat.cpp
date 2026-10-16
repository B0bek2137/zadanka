#include <iostream>

using namespace std;
bool porownanie (int a, int b, int c)

{
if (a + b > c and a + c > b and b + c > a)
    return 1;
else return 0;
}
int main()
{
int a, b, c;
cout << "podaj 1 liczbe" << endl;
cin >> a;
cout << "podaj 2 liczbe" << endl;
cin >> b;
cout << "podaj 3 liczbe" << endl;
cin >> c;
cout << porownanie(a, b ,c)<<endl;
return 0;
}
