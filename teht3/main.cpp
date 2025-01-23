#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef y = Chef("pekka");
    ItalianChef x = ItalianChef("Jorma");
    y.makeSalad(17);
    y.makeSoup(20);


    x.askSecret("pizza",10, 5);

    return 0;
}
