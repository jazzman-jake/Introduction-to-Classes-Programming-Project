#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    cout << "Test default constructor: ";
    Date d1;
    cout << d1.printNumeric() << endl;

    cout << "Test constructor with valid date (2/28/2009): ";
    Date d2(2, 28, 2009);
    cout << d2.printNumeric() << endl;

    cout << "Test constructor with invalid month (45, 2, 2009): ";
    Date d3(45, 2, 2009);
    cout << d3.printNumeric() << endl;

    cout << "Test constructor with invalid day (2, 29, 2009): ";
    Date d4(2, 29, 2009);
    cout << d4.printNumeric() << endl;

    cout << "Test setDate with bad month (13): ";
    d4.setDate(13, 1, 2009);
    cout << d4.printNumeric() << endl;

    cout << "Test setDate with bad day (4, 31, 2009): ";
    d4.setDate(4, 31, 2009);
    cout << d4.printNumeric() << endl;

    cout << "Test leap year with invalid date (2, 29, 2009): ";
    d4.setDate(2, 29, 2009);
    cout << d4.printNumeric() << endl;

    cout << "Test leap year with valid date (2, 29, 2008): ";
    d4.setDate(2, 29, 2008);
    cout << d4.printNumeric() << endl;

    cout << "Print formats:\n";
    cout << d4.printMonthFirst() << endl;
    cout << d4.printDayFirst() << endl;

    return 0;
}
