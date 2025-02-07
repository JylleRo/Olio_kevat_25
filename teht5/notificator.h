#ifndef NOTIFICATOR_H
#define NOTIFICATOR_H

#include <iostream>
#include "follower.h"
using namespace std;

class Notificator{
public:
    Notificator();
    void add(Follower*);
    void discard(Follower*);
    void print();
    void post(string);
private:
    Follower* followers = nullptr;
};

#endif // NOTIFICATOR_H
