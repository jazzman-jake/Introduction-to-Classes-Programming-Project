#include "Date.h"
#include <iostream>
#include <sstream>
using namespace std;

static const string monthNames[] = {
    "", "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"
};

Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

void Date::setDate(int m, int d, int y) {
    if (isValidDate(m, d, y)) {
        month = m;
        day = d;
        year = y;
    }
    else {
        cout << "Invalid date. Setting to default 1/1/1900\n";
        month = 1;
        day = 1;
        year = 1900;
    }
}

bool Date::isValidDate(int m, int d, int y) const {
    if (m < 1 || m > 12) return false;
    if (d < 1 || d > lastDay(m, y)) return false;
    if (y < 1) return false;
    return true;
}

bool Date::isLeapYear() const {
    return isLeapYear(year);
}

bool Date::isLeapYear(int y) const {
    return ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
}

int Date::lastDay() const {
    return lastDay(month, year);
}

int Date::lastDay(int m, int y) const {
    switch (m) {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(y) ? 29 : 28;
    default:
        return 0;
    }
}

string Date::printNumeric() const {
    ostringstream oss;
    oss << month << "/" << day << "/" << year;
    return oss.str();
}

string Date::printMonthFirst() const {
    ostringstream oss;
    oss << monthNames[month] << " " << day << ", " << year;
    return oss.str();
}

string Date::printDayFirst() const {
    ostringstream oss;
    oss << day << " " << monthNames[month] << " " << year;
    return oss.str();
}
