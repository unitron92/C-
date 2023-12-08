// array_operations.hpp
//author Djaner
//20.11.2023



#ifndef ARRAY_OPERATIONS_H
#define ARRAY_OPERATIONS_H

const int MAX_SIZE = 30;

int enterArraySize(int& size);
void enterArrayElements(double array[], int size);
double calculatePositiveSum(const double array[], int size);
double calculateNegativeAverage(const double array[], int size, double min, double max);
double calculateProduct(const double array[], int size, int& zeroCount);
double findMinPositiveNumber(const double array[], int size, int& position);
void printArray(const double array[], int size);

#endif // ARRAY_OPERATIONS_H
