#include "main.cpp"
#include "Pankkitili.h"


Pankkitili::Pankkitili(string omistaja)
{
    cout << "omistaja on: " << omistaja << "\n";
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double maara)
{
    if (maara > 0) {    //Jos maara on suurempi kuin nolla
        saldo += maara;
        return true;
    }
    else {
        return false;
    }

bool Pankkitili::withdraw(double maara)
{
    if (saldo > 0 && saldo >= maara) { // Tilillä on enemmän kuin 0, ja saldo on joko enemmän tai yhtäsuuri kuin nostettava maara
        saldo -= maara;
        return true;
    }
    else {
        return false;
    }

}
