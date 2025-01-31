#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    Asiakas Aapeli("Aapeli",1000);
    Aapeli.showSaldo();
    Aapeli.talletus(250);
    Aapeli.luotonNosto(150);
    Aapeli.showSaldo();

    Asiakas Bertta("Bertta",1000);

    Bertta.showSaldo();
    Aapeli.showSaldo();
    Aapeli.tiliSiirto(50,Bertta);
    Aapeli.showSaldo();
    Bertta.showSaldo();


}
