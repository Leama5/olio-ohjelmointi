#include "game.h"
#include <iostream>
using namespace std;

Game::Game(int n)
{
    maxNumber=n;
    cout<< "GAME CONSTRUCTOR:object initialized with  "<< maxNumber << "as a maximum value" <<endl;
    srand(time(NULL));
    randomNumber= rand()%maxNumber-1;
    play();
}

Game::~Game()
{
 cout<< "GAME DESTRUCTOR:object cleared from stack memory"<<endl;
}

void Game::play()
{
    cout << "Give your guess between 1-"<< maxNumber <<endl;
    cin >> playerGuess;
    while (playerGuess !=randomNumber)
    {
        if (playerGuess> randomNumber)
        {
            cout << "Arvottu luku on pienempi kuin sinun lukusi"<< endl;
            cout << "Arvaa numero" << endl;
            cin >> playerGuess;
            numOfGuesses++;

        }
        else if (playerGuess< randomNumber)
        {
            cout<< "Arvottu luku on suurempi kuin sinun lukusi"<< endl;
            cout << "Arvaa numero" << endl;
            cin >> playerGuess;
            numOfGuesses++;
        }
    }
    if (playerGuess==randomNumber)
    {
    printGameResult();
    }
}

void Game::printGameResult()
{
    cout<< "You guessed the right answer = "<< randomNumber <<endl;
    cout<< "Arvauksia yhteensa "<< numOfGuesses<<endl;

}
