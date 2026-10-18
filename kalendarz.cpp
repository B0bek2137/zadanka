#include <iostream>
using namespace std;
unsigned int dzien, miesiac, rok;
bool przestepny_rok(unsigned int rok)
{
    if (rok % 400 == 0)
        return true;
    else if (rok % 100 == 0)
        return false;
    else if (rok % 4 == 0)
        return true;
    else
        return false;
}
    void data(unsigned int dzien, unsigned int miesiac, unsigned int rok) {
        if (miesiac == 2 and dzien == 29) {
            if (przestepny_rok(rok) == 0)
                cout << "niepoprawna" << endl;
            else cout << "poprawna" << endl;
        }
        else if ((miesiac % 2 == 1 or miesiac == 8 or miesiac == 10 or miesiac == 12) and dzien == 31)
            cout << "poprawna" << endl;
        else if ((miesiac == 2 and dzien == 30) or dzien == 31)
            cout << "niepoprawna" << endl;
        else if ((miesiac % 2 == 0 and dzien == 31))
            cout << "niepoprawna" << endl;
        else cout << "poprawna" << endl;
        }
    
    int main() {
        data(29, 2, 2000);
        data(29, 2, 1900);
        data(31, 4, 2025);
        data(31, 12, 2024);
            return 0;
    }

