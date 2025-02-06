#include "seuraaja.h"
using namespace std;

Seuraaja::Seuraaja(string n)
{
    cout<<"luodaan seuraaja "<< n<< endl;
    nimi=n;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string v)
{

    cout<< v <<endl;
    /*if (next =! nullptr)
    {
        next->paivitys(v);
    }*/
}
