#pragma once

#include <iostream>
#include <string>

#include "Date.h"
#include "Person.h"

using namespace std;

struct Student {
    Person person_info;
    string faculty;
    string group;
    Date receipt_date;
};

void PrintStudent(Student student) {
    PrintPerson(student.person_info);
    cout << student.faculty << ", " << student.group << endl;
    cout << student.receipt_date.ToString() << endl;
}

Student CreateStudent() {
    Student student;

    student.person_info = CreatePerson();
    cout << "Введите факультет : ";
    cin >> student.faculty;
    cout << "Введите группу : ";
    cin >> student.group;
    cout << "Введите дату поступления: " << endl;
    student.receipt_date = CreateDate();

    return student;
}