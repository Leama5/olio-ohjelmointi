#include <iostream>
#include "italianchef.h"
#include "chef.h"

using namespace std;

int main()
{

    Chef Gordon("Gordon");
    Gordon.makeSalad(11);
    Gordon.makeSoup(14);

    ItalianChef Mario("Mario");
    Mario.makeSalad(9);
    Mario.askSecret("pizza",12,12);
}
