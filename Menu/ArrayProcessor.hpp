// ArrayProcessor.hpp

#ifndef ARRAY_PROCESSOR_HPP
#define ARRAY_PROCESSOR_HPP

#include <vector>

class ArrayProcessor {
public:
    ArrayProcessor();
    bool enterArraySize();
    void enterArrayElements();
    void processArray();
    double calculatePositiveSum() const;
    double calculateNegativeAverage(double min, double max) const;
    double calculateProduct(int& zeroCount) const;
    double findMinPositiveNumber(int& position) const;
    void printArray() const;

private:
    int size;
    std::vector<double> array;
};

#endif // ARRAY_PROCESSOR_HPP
