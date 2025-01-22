#include "chef.h"
using namespace std;


Chef::Chef(string n)
{
    chefName=n;
    cout<< "Chef "<< chefName<< " Construct" <<endl;
}

Chef::~Chef()
{
    cout<< "Chef "<< chefName<< " Destruct" <<endl;
}

string Chef::getName()
{
    cout<<chefName<<endl;
    return chefName;
}

int Chef::makeSalad(int m)
{
    if(m>=5)
    {
        int s=m/5;
        cout<< chefName <<" with "<< m <<" items can make salad "<< s <<" portions"<<endl;
        return s;
    }
    else
        {
        cout<< chefName <<" with "<< m <<" items can't make salad!"<<endl;
        return 0;
        }
}

int Chef::makeSoup(int m)
{
    if(m>=3)
    {
        int s=m/3;
        cout<< chefName <<" with "<< m <<" items can make soup "<< s <<" portions"<<endl;
        return s;
    }
    return 0;
}
