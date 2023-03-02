#pragma once

#include <iostream>
#include <string>

#include "Date.h"
#include "Person.h"

using namespace std;

struct Teacher {
    Person person_info;
    string subject;
    Date employment_date;
};

void PrintTeacher(Teacher teacher) {
    PrintPerson(teacher.person_info);
    cout << teacher.subject << endl;
    cout << teacher.employment_date.ToString() << endl;
}

Teacher CreateTeacher() {
    Teacher teacher;

    teacher.person_info = CreatePerson();
    cout << "������ �।��� : ";
    cin >> teacher.subject;
    cout << "������ ���� ��� �� ࠡ���: " << endl;
    teacher.employment_date = CreateDate();

    return teacher;
}
