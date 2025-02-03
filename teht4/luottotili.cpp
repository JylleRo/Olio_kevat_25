#include "Asiakas.h"
#include "Luottotili.h"
#include "Pankkitili.h"

Luottotili::Luottotili() {}
Luottotili::Luottotili(string omistaja, double raja) : Pankkitili(omistaja)
{
    luottoRaja = -raja;
}
double Luottotili::getBalance()
{
    return abs(luottoRaja - saldo);
}

bool Luottotili::deposit(double maara)
{
    if (maara > 0) {    //Jos maara on suurempi kuin nolla
        saldo += maara;
        return true;
    }
    else {
        return false;
    }
}

bool Luottotili::withdraw(double maara)
{
    if (maara < 0 || saldo - maara < luottoRaja){
        return false;
    }
    else{
        saldo -= maara;
        cout << "Luottotili: nosto " << maara << " tehty, luottoa jaljella " << getBalance() << "\n";
        return true;
    }
    //Voi nostaa saldon negatiiviseksi
}
