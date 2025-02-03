#include <iostream>
#include "Asiakas.h"

using namespace std;

int main() {

    Asiakas x = Asiakas("Jorma", 1000);


    cout << endl << x.getNimi() << endl;

    x.showSaldo();
    x.talletus(250);
    x.luotonNosto(150);
    x.showSaldo();

    cout << endl;

    Asiakas y("Tarmo", 500);
    y.showSaldo();

    cout << endl << x.getNimi() << endl;
    x.tiliSiirto(250, y);

    cout << endl << x.getNimi() << endl;
    x.showSaldo();
    cout << endl << y.getNimi() << endl;
    y.showSaldo();
    return 0;
}
