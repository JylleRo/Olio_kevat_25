#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int);

int main()
{
    srand(time(0));

    cout << game(10) << " kertaa\n";

    return 0;
}

int game(int maxnum)
{
    int random = rand() % maxnum + 1;
    int arvaus;
    int lkm = 0;

    while (arvaus != random){
        lkm++;

        cout << "Arvaa oikea luku\n";

        cin >> arvaus;

        if (arvaus < random){
            cout << "arvaus liian pieni\n";
        }
        else if (arvaus > random){
            cout << "arvaus liian suuri\n";
        }
    }
    cout << "oikein!\nArvasit ";
    return lkm;
}
