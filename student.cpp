#include "student.h"

Student::Student()
{

}

Student::Student(string n, int b, string g)
{
    this->setName(n);
    this->setBirthYear(b);
    this->setGroupName(g);
}

string Student::getGroupName() const
{
    return groupName;
}

void Student::setGroupName(const string &newGroupName)
{
    groupName = newGroupName;
}

void Student::printStudentData()
{
    cout<<"Nimi: "<<this->getName()<<endl;
    cout<<"Syntynyt: "<<this->getBirthYear()<<endl;
    cout<<"Luokka: "<<this->getGroupName()<<endl;
    cout<<"*****************************\n";
}
