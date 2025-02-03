#include "Pankkitili.h"

Pankkitili::Pankkitili(){}

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
    if (maara > 0) {
        saldo += maara;
        cout << "Kayttotili: talletus " << maara << " tehty, uusi saldo " << getBalance() << "\n";
        return true;
    }
    else {
        return false;
    }
}
bool Pankkitili::withdraw(double maara)
{
    if (saldo > 0 && saldo >= maara) {
        saldo -= maara;
        cout << "Kayttotili: nosto " << maara << " tehty, uusi saldo " << getBalance() << "\n";
        return true;
    }
    else {
        return false;
    }
}
