#include "student.h"
#include "teacher.h"

#include <iostream>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<vector<Student>> studentList = make_unique<vector<Student>>();

    studentList->emplace_back("Teppo Testi", 1999, "TVT23SPL");
    studentList->emplace_back("Liisa Joki", 1998, "TVT23SPL");
    studentList->emplace_back("Aino Virta", 1997, "TVT23SPO");
    studentList->emplace_back("Matti Virtanen", 2001, "TVT23SPO");
    studentList->emplace_back("Mikko Vilkas", 2001, "TVT23SPL");

    // Hae opiskelijalista studentList-osoittimesta
    vector<Student>& students = *studentList;

    for(int x=0; x<=4; x++){
        // Käytä opiskelijalistan elementtiä `x` ja kutsu printStudentData() -funktiota
        students[x].printStudentData();
    }

    return 0;

    return 0;
}
