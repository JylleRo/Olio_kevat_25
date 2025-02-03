#include "Asiakas.h"
#include "Pankkitili.h"
#include "Luottotili.h"

Asiakas::Asiakas(string nimi, double raja)
{
    this->nimi = nimi;
    kayttotili = Pankkitili(nimi);
    luottotili = Luottotili(nimi, raja);
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Pankkitilin saldo on: " << kayttotili.getBalance() << "\nLuottotilin saldo on: " << luottotili.getBalance() << "\n";
}

bool Asiakas::talletus(double maara)
{
    return kayttotili.deposit(maara);
}

bool Asiakas::nosto(double maara)
{
    return kayttotili.withdraw(maara);
}

bool Asiakas::luotonMaksu(double maara)
{
    return luottotili.deposit(maara);
}

bool Asiakas::luotonNosto(double maara)
{
    return luottotili.withdraw(maara);
}
bool Asiakas::tiliSiirto(double amount, Asiakas& target)
{

    cout << "Pankkitili: Yritetaan siirtaa " << amount << " " << target.getNimi() << ":lle" << endl;
    bool x = nosto(amount) && target.talletus(amount);

    cout << (x ? "Tilisiirto onnistui" : "Tilisiirto epaonnistui") << endl;
    return x;
}
