#pragma once

#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;

    string ToString() {
        return to_string(day) + "." + to_string(month) + "." + to_string(year);
    }
};

Date CreateDate() {
    Date date;

    cout << "Введите год : ";
    cin >> date.year;
    cout << "Введите месяц : ";
    cin >> date.month;
    cout << "Введите день : ";
    cin >> date.day;

    return date;
}