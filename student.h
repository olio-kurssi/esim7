#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

#include "person.h"



class Student : public Person
{
public:
    Student();
    Student(string n, int b, string g);
    string getGroupName() const;
    void setGroupName(const string &newGroupName);
    void printStudentData();

private:
    string groupName;
};

#endif // STUDENT_H
