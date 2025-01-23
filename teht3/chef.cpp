#include "chef.h"

Chef::Chef(string x){
    chefName = x;
    cout << "luotiin kokki nimelta " << chefName << "\n";
}

Chef::~Chef(){
    cout << "poitettiin kokki keittiosta\n";
}

string Chef::getName(){

    return chefName;
}

void Chef::setName(string nimi){
    chefName = nimi;
}

int Chef::makeSalad(int lkm){
    int ainesmaara = lkm / 5;
    cout << "Salaatti annoksia saadaan: " << ainesmaara << "\n";

    return ainesmaara;
}

int Chef::makeSoup(int lkm){
    cout << "Keitto annoksia saadaan: " << lkm / 3 << "\n";

    return lkm / 3;
}
