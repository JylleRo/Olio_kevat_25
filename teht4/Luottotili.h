#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "Pankkitili.h"

class Luottotili : public Pankkitili{
public:
    Luottotili();
    Luottotili(string,double);
    bool deposit(double) override;
    bool withdraw(double) override;
    double getBalance() override;
protected:
    double luottoRaja = 0;

};

#endif // LUOTTOTILI_H
