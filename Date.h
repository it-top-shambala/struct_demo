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

    cout << "������ ��� : ";
    cin >> date.year;
    cout << "������ ����� : ";
    cin >> date.month;
    cout << "������ ���� : ";
    cin >> date.day;

    return date;
}