#include "pankkitili.h"

Pankkitili::Pankkitili(string n)
{
    cout << "Pankkitili luotu "<< n << " :lle" <<endl;
    this->omistaja=n;
}

double Pankkitili::getBalance()
{
    return saldo;

}

bool Pankkitili::deposit(double t)
{
    if (t<0)
    {
        cout << omistaja<< " Pankkitili: Ei voi tallettaa negatiivista maaraa" <<endl;
        return false;
    }
    else
    {
        saldo= saldo+t;
        cout <<omistaja<<  " Pankkitili: Talletus "<< t <<" tehty" <<endl;
        return true;
    }
}

bool Pankkitili::withdraw(double n)
{
    double nosto=saldo-n;
    if (n<0)
    {
       cout <<omistaja<<  " Pankkitili: Nostoa ei voi tehda negatiivisella luvulla, tilin saldo "<< saldo <<endl;
        return false;
    }
    else if (nosto<0)
    {
        cout <<omistaja<<  " Pankkitili: Nostoa ei voi tehda, tilin saldo "<< saldo <<endl;
        return false;
    }
    else
    {
        saldo=saldo-n;
        cout <<omistaja<<  " Pankkitili: Nosto "<< n <<" tehty, tililla rahaa "<< nosto <<endl;
        return true;
    }

}
