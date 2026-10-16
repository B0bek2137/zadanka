#include <iostream>
using namespace std;
string ocenaslownie (int ocena)
{
    if (ocena == 1)
        return "niedostateczny";
    else if (ocena == 2)
        return "dopusszczajacy";
     else if (ocena == 3)
        return "dostateczny";
     else if (ocena == 4)
        return "dobry";
     else if (ocena == 5)
        return "bardzo dobry";
     else if (ocena == 6)
        return "celujacy";
}
int main(){
int ocena;
cout << "podaj ocene od 1 do 6" <<endl;
cin >> ocena;
cout << ocenaslownie(ocena) << endl;
}
