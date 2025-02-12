#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

// Funktio, joka vertaa kahta paria nimen mukaan
bool compare(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a.first < b.first; // Järjestä nimen mukaan
}

int main() {
    std::map<std::string, std::string> phoneBook; // Puhelinluettelo
    string name = "Pelle Peloton";
    string number = "+358 40 111222";
    phoneBook[name] = number;
    name = "Kalle Kalastaja";
    number = "+358 40 333444";
    phoneBook[name] = number;
    phoneBook["Jeppe Niilonpoika"] = "+358 50 555666";
    std::cout << "Puhelinluettelo:\n";
    for (const auto& entry : phoneBook)
    {
        std::cout << "Nimi: " << entry.first << ", Numero: " << entry.second << "\n"; // Tulostetaan kaikki
    }
    cout<<"Poista Kalle kalastaja luettelosta ja lisää Saku Sammakko +1 12 345678"<<endl;
    cout<<std::endl;

    phoneBook.erase("Kalle Kalastaja");
    phoneBook["Saku Sammakko"] = "+1 12 345678";

    for (const auto& entry : phoneBook)
    {
        std::cout << "Nimi: " << entry.first << ", Numero: " << entry.second << "\n"; // Tulostetaan kaikki
    }

    cout<<"Tulosta puhelinluettelo päinvastausessa järjestyksessä käänteisen iteraattorin avulla"<<endl;
    cout<<std::endl;

    for (auto it = phoneBook.rbegin(); it != phoneBook.rend(); it++) { // Käänteinen iteraatio
        std::cout << "Nimi: " << it->first << it->second << std::endl; // Tulostetaan kaikki
    }



    return 0; // Ohjelma palauttaa 0
}
