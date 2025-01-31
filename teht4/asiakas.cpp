#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"
using namespace std;

Asiakas::Asiakas(string n, double s)
{

    nimi=n;
   kayttotili=new Pankkitili(n);
   luottotili= new Luottotili(n,s);
    cout << "Asiakkuus luotu "<< n <<":lle" <<endl;
}

string Asiakas::getNimi()
{

    return nimi;
}

void Asiakas::showSaldo()
{
    cout <<getNimi()<<  " pankkitili: Tilin saldo "<< kayttotili->getBalance() <<endl;

    cout <<getNimi()<<  " luottotili: Tilin saldo "<< luottotili->getBalance() <<endl;
}

bool Asiakas::talletus(double t)
{
    kayttotili->deposit(t);

    return true;
}

bool Asiakas::nosto(double n)
{
    kayttotili->withdraw(n);

    return true;
}

bool Asiakas::luotonMaksu(double lm)
{
luottotili->deposit(lm);
return true;
}

bool Asiakas::luotonNosto(double ln)
{
luottotili->withdraw(ln);
return true;
}

bool Asiakas::tiliSiirto(double s, Asiakas &n)
{
    cout <<this->getNimi()<< " siirtaa "<<s<<" "<< n.getNimi()<< " :lle"<<endl;
    double saldo=this->kayttotili->getBalance();
    if (s<saldo)
    {
        this->kayttotili->withdraw(s);
        n.talletus(s);
        return true;
    }
    else
    {
        cout <<this->getNimi()<<  " Nostoa ei voi tehda, tilin saldo ei riita "<<endl;
        return false;
    }
}



