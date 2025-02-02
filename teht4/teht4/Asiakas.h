#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <iostream>
#include <string>
#include "Luottotili.h"
using namespace std;


class Pankkitili;
class Luottotili;

class Asiakas {
public:
    Asiakas(string,double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);

private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
