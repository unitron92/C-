// marray_operations.cpp
// Author: Djaner
// Created on: 20.11.2023

#include <iostream>
#include "array_operations.hpp"

using namespace std;

// Въвежда размерност на масива и проверява валидността ѝ.
// Връща 1, ако размерността е валидна и 0, ако не е.
int enterArraySize(int& size) {
    cout << "Въведете размерност на масива (до " << MAX_SIZE << "): ";
    cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        cout << "Невалидна размерност!";
        return 0;
    }

    return 1;
}

// Въвежда елементите на масива.
void enterArrayElements(double array[], int size) {
    cout << "Въведете елементите на масива: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

// Изчислява сумата на положителните елементи на масива.
double calculatePositiveSum(const double array[], int size) {
    double positiveSum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positiveSum += array[i];
        }
    }
    return positiveSum;
}

// Изчислява средноаритметичното на отрицателните елементи на масива в интервала [min, max].
// Връща 0, ако няма такъв елемент.
double calculateNegativeAverage(const double array[], int size, double min, double max) {
    double negativeSum = 0;
    int negativeCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] < 0 && array[i] >= min && array[i] <= max) {
            negativeSum += array[i];
            negativeCount++;
        }
    }
    if (negativeCount == 0) {
        return 0;
    }
    return negativeSum / negativeCount;
}

// Изчислява произведението на елементите на масива.
// Връща 0, ако в масива има 0.
double calculateProduct(const double array[], int size, int& zeroCount) {
    double product = 1;
    zeroCount = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == 0) {
            zeroCount++;
        } else {
            product *= array[i];
        }
    }
    return product;
}

// Намира най-малкия положителен елемент на масива и неговата позиция.
// Връща 0, ако в масива няма положителни елементи.
double findMinPositiveNumber(const double array[], int size, int& position) {
    double minPositiveNumber = -1;  
    position = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0 && (minPositiveNumber == -1 || array[i] < minPositiveNumber)) {
            minPositiveNumber = array[i];
            position = i;
        }
    }
    if (position == -1) {
        return 0;
    }
    return minPositiveNumber;
}

// Отпечатва масива.
void printArray(const double array[], int size) {
    cout << "Въведените числа са: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}