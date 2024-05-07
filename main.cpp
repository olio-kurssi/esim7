#include "student.h"
#include "teacher.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<vector<Student>> studentList = make_unique<vector<Student>>();

    Student objectStudent0("Teppo Testi",1999,"TVT23SPL");
    studentList->push_back(objectStudent0);
    Student objectStudent1("Liisa Joki",1998,"TVT23SPL");
    studentList->push_back(objectStudent1);
    Student objectStudent2("Aino Virta",1997,"TVT23SPO");
    studentList->push_back(objectStudent2);
    Student objectStudent3("Matti Virtanen",2001,"TVT23SPO");
    studentList->push_back(objectStudent3);
    Student objectStudent4("Mikko Vilkas",2001,"TVT23SPL");
    studentList->push_back(objectStudent4);

    for(int x=0; x<=4; x++){
        // Hae opiskelijalista studentList-osoittimesta
        vector<Student>& students = *studentList;

        // Käytä opiskelijalistan elementtiä `x` ja kutsu printStudentData() -funktiota
        students[x].printStudentData();
    }


    return 0;
}
