#include "luottotili.h"
#include "pankkitili.h"

using namespace std;

Luottotili::Luottotili(string n, double l): Pankkitili(n)
{
    luottoRaja=l;
    saldo=l;
    omistaja=n;
    cout << "Luottotili luotu "<< omistaja <<":lle, luottoraja " <<luottoRaja<<endl;

}


bool Luottotili::deposit(double t)
{
    double talletus=saldo+t;
    if (t<0)
    {
        cout <<omistaja<<  " Luottotili:Ei voi tallettaa negatiivista maaraa" <<endl;
        return false;
    }
    else if (talletus>0)
    {
        cout <<omistaja<<  " Luottotili: Luoton maksu ylittyy" <<endl;
        return false;
    }
    else
    {
        saldo=luottoRaja-t;
        cout <<omistaja<<  " Luottotili: Luoton maksu "<< t <<" tehty" <<endl;
        return true;
    }
}

bool Luottotili::withdraw(double n)
{
    if (n<0)
    {
        cout <<omistaja<<  " Luottotili: Ei voi nostaa negatiivista maaraa" <<endl;
        return false;
    }
    else if (n>luottoRaja)
        {
            cout <<omistaja<<  " Luottotili: Nostoa ei voi tehda, tilin saldo "<< saldo <<endl;
            return false;
        }
    else
        {
            saldo= saldo-n;
            cout <<omistaja<<  " Luottotili: Nosto "<< n <<" tehty, luottoa jaljella "<< saldo <<endl;
            return true;
        }
}
