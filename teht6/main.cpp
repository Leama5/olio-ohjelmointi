#include <iostream>
#include <vector>
#include "student.h"
#include <algorithm>

using namespace std;

bool compareByName(Student& a, Student& b) {
    return a.getName() < b.getName();
}
bool compareByAge(Student& a, Student& b) {
    return a.getAge() < b.getAge();
}

int main ()
{
    int selection =0;
    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

      switch(selection)
        {
        case 0: {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            string nimi;
            int ika;
            cout<< "Anna opiskelijan nimi"<< endl;
            cin>> nimi;
            cout<< "Anna opiskelijan ika"<< endl;
            cin>> ika;


            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back();
            studentList.back().setName(nimi);
            studentList.back().setAge(ika);
            cout<< "Uusi opiskelija lisatty vektoriin"<<endl;
            break;
            }

        case 1:
            {
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            for (auto it = studentList.rbegin(); it != studentList.rend(); it++) { // Käänteinen iteraatio
                cout << "Nimi: " << it->getName() <<" Ika: " <<it->getAge() <<endl;
                // Tulostetaan kaikki
                }
            break;
            }


        case 2:
            {
            sort(studentList.begin(), studentList.end(), compareByName);
            for( auto& Student: studentList)
                {
                Student.printStudentInfo();
                }
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
            }
        case 3:
            {
            sort(studentList.begin(), studentList.end(), compareByAge);
            for( auto& Student: studentList)
                {
                Student.printStudentInfo();
                }
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;
            }

        case 4:
            {
            string target;
            cout<< "Anna nimi"<<endl;
            cin>> target;
            //auto it = find(studentList.begin(), studentList.end(), target);
            // Käytetään std::find_if-funktiota myClass-olioiden etsimiseen
            auto it = find_if(studentList.begin(), studentList.end(),[target](Student& obj) {return target==obj.getName();});


            if(it!= studentList.end())
            {
                cout<< "Opiskelijan tiedot loytyivat: "<< target<<" "<< it[0].getAge() << endl;

            }
            else
            {
               cout<< "Tietoja ei loytynyt" << target << endl;
            }

            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }
while(selection < 5);


return 0;
}


