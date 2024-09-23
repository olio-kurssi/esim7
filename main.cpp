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
    Student objectStudent1("Liisa Joki",1998,"TVT23SPL");
    Student objectStudent2("Aino Virta",1997,"TVT23SPO");
    Student objectStudent3("Matti Virtanen",2001,"TVT23SPO");
    Student objectStudent4("Mikko Vilkas",2001,"TVT23SPL");

    studentList->push_back(objectStudent0);
    studentList->push_back(objectStudent1);
    studentList->push_back(objectStudent2);
    studentList->push_back(objectStudent3);
    studentList->push_back(objectStudent4);

    // Hae opiskelijalista studentList-osoittimesta
    vector<Student>& students = *studentList;

    for(int x=0; x<=4; x++){
        // Käytä opiskelijalistan elementtiä `x` ja kutsu printStudentData() -funktiota
        students[x].printStudentData();
    }

    return 0;

    return 0;
}
