#include "NumberArray.h"

NumberArray::NumberArray(int s) {
    if (s <= 0) {
        cout << "Invalid size. Using default size: " << MAX_SIZE << endl;
        size = MAX_SIZE;
    }
    else {
        size = s;
    }

    numbers = new double[size];
    for (int i = 0; i < size; i++) {
        numbers[i] = 0.0;
    }
}

NumberArray::~NumberArray() {
    delete[] numbers;
    cout << "The destructor is running" << endl;
}

void NumberArray::setNumber(int index, double value) {
    if (index < 0 || index >= size) {
        cout << "The index is out of the bounds of the array, number not stored" << endl;
    }
    else {
        numbers[index] = value;
    }
}

double NumberArray::getNumber(int index) const {
    if (index < 0 || index >= size) {
        cout << "The Index is out of the bounds of the array, returning default" << endl;
        return DEFAULT_VALUE;
    }
    return numbers[index];
}

double NumberArray::getMax() const {
    double max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) max = numbers[i];
    }
    return max;
}

double NumberArray::getMin() const {
    double min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) min = numbers[i];
    }
    return min;
}

double NumberArray::getAverage() const {
    double total = 0.0;
    for (int i = 0; i < size; i++) {
        total += numbers[i];
    }
    return total / size;
}

void NumberArray::print() const {
    for (int i = 0; i < size; i++) {
        cout << fixed;
        cout.precision(1);
        cout << numbers[i] << " ";
    }
    cout << endl;
}

