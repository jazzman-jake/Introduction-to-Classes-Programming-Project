#include <iostream>
#include <random>
#include "NumberArray.h"

int main() {
    cout << "----- Test constructors -----" << endl;
    NumberArray arr1;
    cout << "From default constructor: Array of size 10" << endl;
    arr1.print();

    NumberArray arr2(15);
    cout << "From constructor with parameters: Array of size 15" << endl;
    arr2.print();

    cout << "----- Test mutator -----" << endl;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> dis(1.0, 100.0);

    for (int i = 0; i < 15; i++) {
        arr2.setNumber(i, dis(gen));
    }

    cout << "Array filled with numbers:" << endl;
    arr2.print();

    cout << "Trying to set a number with an out of bounds index (20):" << endl;
    arr2.setNumber(20, 123.45);

    cout << "----- Test accessors -----" << endl;
    cout << "Access item at index 5: " << arr2.getNumber(5) << endl;

    cout << "Access item at index 20 (out of bounds): " << arr2.getNumber(20) << endl;

    cout << "The minimum value in the array is: " << arr2.getMin() << endl;
    cout << "The maximum value in the array is: " << arr2.getMax() << endl;
    cout << "The average of the values in the array is: " << arr2.getAverage() << endl;

    return 0;
}
