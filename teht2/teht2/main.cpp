#include <iostream>
#include "Game.h"
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    Game y(100);

    y.play();
    return 0;
}
