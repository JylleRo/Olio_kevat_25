#include "main.cpp"
#include "Asiakas.h"
#include "Luottotili.h"


Luottotili::Luottotili(string omistaja, double luottoraja)
{
    cout << "constructori";
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
    if (maara <= saldo + luottoRaja) {
        saldo -= maara;
        return true;
    }
    else{

        return false;
    }
    //Voi nostaa saldon negatiiviseksi
}
