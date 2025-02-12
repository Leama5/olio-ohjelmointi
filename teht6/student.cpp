#include "student.h"

Student::Student() {
    cout<< "Student konstruktori"<<endl;
}

void Student::setAge(int a)
{
    Age=a;
}

void Student::setName(string n)
{
    Name=n;
}

string Student::getName()
{
    return Name;
}

int Student::getAge()
{
    return Age;

}

void Student::printStudentInfo()
{
    cout<<"Opiskelijan tiedot:"<< Name<< " "<< Age<<endl;
}
