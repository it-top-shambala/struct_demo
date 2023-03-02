#include <iostream>
#include <string>

#include "Date.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    Student student = CreateStudent();
    PrintStudent(student);

    Teacher teacher = CreateTeacher();
    PrintTeacher(teacher);

    return 0;
}
