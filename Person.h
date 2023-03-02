#pragma once

#include <iostream>
#include <string>

#include "Date.h"

using namespace std;

struct Person {
    string first_name;
    string last_name;
    char sex;
    Date date_of_birth;
};

void PrintPerson(Person person) {
    cout << person.last_name << " " << person.first_name << ", " << person.sex << ", ";
    cout << person.date_of_birth.ToString() << endl;
}

Person CreatePerson() {
    Person person;

    cout << "Введите фамилию : ";
    cin >> person.last_name;
    cout << "Введите имя : ";
    cin >> person.first_name;
    cout << "Введите пол ( М / Ж ) : ";
    cin >> person.sex;
    cout << "Введите дату рождения : " << endl;
    person.date_of_birth = CreateDate();

    return person;
}
