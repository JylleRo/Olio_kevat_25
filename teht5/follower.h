#ifndef FOLLOWER_H
#define FOLLOWER_H

#include <iostream>
using namespace std;

class Follower{
public:
    Follower* next = nullptr;
    Follower(string);
    string getName();
    void update(string);
private:
    string name;
};

#endif // FOLLOWER_H
