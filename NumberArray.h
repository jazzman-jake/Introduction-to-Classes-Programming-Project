#pragma once

#ifndef NUMBERARRAY_H
#define NUMBERARRAY_H

#include <iostream>
    using namespace std;

    class NumberArray {
    private:
        static const int MAX_SIZE = 10;          // Default array size
        static constexpr double DEFAULT_VALUE = 10000.0; // Default return value
        int size;
        double* numbers;

    public:
        NumberArray(int size = MAX_SIZE); // Constructor
        ~NumberArray();                   // Destructor

        void setNumber(int index, double value);
        double getNumber(int index) const;

        double getMax() const;
        double getMin() const;
        double getAverage() const;

        void print() const;
    };

#endif

