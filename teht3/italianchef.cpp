#include "italianchef.h"

ItalianChef::ItalianChef(string x):Chef(x){
    cout << x << " on Italialainen kokki\n";
}

ItalianChef::~ItalianChef(){
    cout << "Poistettiin Italialainen kokki keittiosta\n";
}

bool ItalianChef::askSecret(string x,int y,int z){
    if(password == x){
        cout << "Salasana oikein\n";
        makepizza(y,z);
    }
    return(password == x);
}

int ItalianChef::makepizza(int flour,int water){
    int maara;
    maara = min(flour / 5,water / 5);
    cout << "Tehdaan " << maara << " pizzaa\n";
    return maara;
}
