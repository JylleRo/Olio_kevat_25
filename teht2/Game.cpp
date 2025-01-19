#include "Game.h"


Game::Game(int x){
    maxNumber = x;
}
Game::~Game(){
    cout << "tama poistettiin\n";
}
void Game::printGameResult(){
    cout << "Arvasit " << numOfGuesses << " kertaa\n";
}

void Game::play(){
    randomNumber = rand() % maxNumber + 1;
    playerGuess;
    numOfGuesses = 0;

    while (playerGuess != randomNumber){
        numOfGuesses++;

        cout << "Arvaa oikea luku\n";

        cin >> playerGuess;

        if (playerGuess < randomNumber){
            cout << "arvaus liian pieni\n";
        }
        else if (playerGuess > randomNumber){
            cout << "arvaus liian suuri\n";
        }
    }
    cout << "oikein!\n";
    printGameResult();
}
