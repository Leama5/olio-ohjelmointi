#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "pankkitili.h"
#include "luottotili.h"
#include <iostream>
using namespace std;


class Asiakas
{
public:
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool nosto(double);
    bool talletus(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tiliSiirto(double,Asiakas &);
private:
    string nimi;
    Pankkitili* kayttotili;
    Luottotili* luottotili;
};

#endif // ASIAKAS_H
