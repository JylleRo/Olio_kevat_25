#include "main.cpp"
#include "Asiakas.h"
#include "Pankkitili.h"

Asiakas::Asiakas(string nimi, double saldo)
    : nimi(nimi), kayttotili(nimi), luottotili(nimi, saldo)
{

}

string Asiakas::getNimi()
{

}

void Asiakas::showSaldo()
{
    cout <<
}

bool Asiakas::talletus(double)
{

}

bool Asiakas::nosto(double)
{

}

bool Asiakas::luotonMaksu(double)
{

}

bool Asiakas::luotonNosto(double)
{

}
