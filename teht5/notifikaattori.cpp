#include "notifikaattori.h"
using namespace std;

Notifikaattori::Notifikaattori()
{
    cout<<"Luodaan notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja *a)
{

    if (this->seuraajat==nullptr)
    {
        this->seuraajat=a;
        cout<<"Notifikaattori lisaa seuraajan "<< a->getNimi() <<endl;
        return;
    }
    Seuraaja * current = this->seuraajat;
    Seuraaja * next = this->seuraajat->next;
    while(next != nullptr) {
        current = next;
        next = next->next;

    }
    current->next= a;
    cout <<"Notifikaattori lisaa seuraajan " << a->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja *a)
{
    cout << "Notifikaattori poistaa seuraajan "<< a->getNimi()<<endl;
    Seuraaja * current = this->seuraajat;
    Seuraaja * edellinen;
    if (current==nullptr)
    {
        return;
    }
    if (current == a)
    {
        this->seuraajat=current->next;
        return;
    }

    while(current != a)
    {
        if (current==nullptr)
        {
            return;
        }
        edellinen=current;
        current = current->next;

        //next = next->next;
    }
    edellinen->next=current->next;
}

void Notifikaattori::tulosta()
{
    cout<< "Notifikaattorin seuraajat:"<< endl;
    Seuraaja * current= this->seuraajat;
    while (current != nullptr)
    {
        cout<<"Seuraaja "<< current->getNimi()<<endl;
        current= current->next;
    }
}

void Notifikaattori::postita(string viesti)
{
    cout<< "Notifikaattori postaa viestin "<< viesti<<endl;
    Seuraaja * current= this->seuraajat;
    while (current != nullptr)
    {
        cout<< "Seuraaja " << current->getNimi() << " sai viestin "<< viesti<< endl;
        current= current->next;

    }
}
