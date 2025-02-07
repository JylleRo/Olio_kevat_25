#include "follower.h"

Follower::Follower(string n)
{
    name = n;
}
string Follower::getName()
{
    return name;
}

void Follower::update(string)
{
    cout << "tahan jotakin filler tekstia\n";
}
