#include "student.h"
#include "teacher.h"

#include <iostream>

using namespace std;

int main()
{
    Student *studentList = new Student[5];
    Student *objectStudent;

    objectStudent=new Student("Teppo Testi",1999,"TVT23SPL");
    studentList[0]=*objectStudent;
    objectStudent=new Student("Liisa Joki",1998,"TVT23SPL");
    studentList[1]=*objectStudent;
    objectStudent=new Student("Aino Virta",1997,"TVT23SPO");
    studentList[2]=*objectStudent;
    objectStudent=new Student("Matti Virtanen",2001,"TVT23SPO");
    studentList[3]=*objectStudent;
    objectStudent=new Student("Mikko Vilkas",2001,"TVT23SPL");
    studentList[4]=*objectStudent;

    for(int x=0; x<=4; x++){
        studentList[x].printStudentData();
    }
    delete[] studentList;
    delete objectStudent;
    objectStudent=nullptr;
    return 0;
}
