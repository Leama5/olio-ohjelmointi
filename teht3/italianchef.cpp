#include "italianchef.h"

ItalianChef::ItalianChef(string n):Chef(n)
{
    chefName=n;
    cout<< "ItalianChef "<< chefName<< " Construct" <<endl;
}

ItalianChef::~ItalianChef()
{
    cout<< "ItalianChef "<< chefName<< " Destruct" <<endl;
}

bool ItalianChef::askSecret(string p, int f, int w)
{
    password.compare(p);
    if (password.compare(p)==0)
    {
        cout<< "Password ok!"<<endl;
        makepizza(f,w);
        return true;

    }
    else
        cout<<"Password denied!"<<endl;
        false;

}

int ItalianChef::makepizza(int f, int w)
{
    if (f>=5 && w>=5)
    {
        int jako1=f/5;
        int jako2=w/5;
        int lkm=std::min(jako1,jako2);
        if(lkm==0)
        {
            cout<< chefName <<" with "<< f <<"flour and" <<w<< "water can't make pizzas"<<endl;
            return 0;
        }
        else
           cout<< chefName <<" with "<<f<<" flour and " <<w<< " water can make "<< lkm<<" pizzas"<<endl;
        return lkm;
    }
    else
        cout<< chefName <<" with "<< f <<"flour and" <<w<< "water can't make pizzas"<<endl;
        return 0;
}
