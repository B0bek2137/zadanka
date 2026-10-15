#include <string>
using namespace std;
int main()
{
    double bagaz;
    cout << "Podaj wage bagazu:" << endl;
    cin >> bagaz;
    if (bagaz > 40) {
        cout << "Bagaz powyzej 40 kg jest niedozwolony." << endl;
        return 0;
    }
    string klasa;
    cout << "Podaj klase (ekonomiczna / biznesowa):" << endl;
    cin >> klasa;

    string status;
    cout << "Podaj status (vip / zwykly):" << endl;
    cin >> status;
    int limit = 20;
    if (klasa == "biznesowa") {
        limit = 30;
    }
    if (status == "vip") {
        limit += 5;
    }

    double doplata = 0;
    if (bagaz <= limit) {
        cout << "Brak doplaty (0 zl)." << endl;
    }
    else {
        double nadbagaz = bagaz - limit;
        doplata = nadbagaz * 40;
        if (nadbagaz > 10) {
            doplata += 200;
        }

        cout << "Op³ata za baga¿ wynosi: " << doplata << " zl" << endl;
    }

    return 0;
}
