#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;
int game(int maxnum);
int main()
{
    int game(int maxnum);
    int kerrat= game(45);
    cout<<"Arvausten maara "<< kerrat <<endl;
}
int game(int maxnum)
{
    maxnum+=1;
    int guess;
    int arvaukset=0;
    srand(time(NULL));
    int randomNum=rand()% maxnum;
    //cout << randomNum << endl; Testausta varten random numero näytölle

    cout << "Arvaa numero" << endl;
    cin >> guess;
    while (guess!=randomNum)
    {
        if (guess> randomNum)
        {
            cout << "Arvottu luku on pienempi kuin sinun lukusi"<< endl;
            cout << "Arvaa numero" << endl;
            cin >> guess;
            arvaukset++;

        }
        else if (guess< randomNum)
        {
            cout<< "Arvottu luku on suurempi kuin sinun lukusi"<< endl;
            cout << "Arvaa numero" << endl;
            cin >> guess;
            arvaukset++;
        }
    }
    if (guess== randomNum)
    {
        cout << "Oikein arvattu!" <<endl;
        arvaukset++;
    }
    return arvaukset;
}
