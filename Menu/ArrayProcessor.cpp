// ArrayProcessor.cpp

#include "ArrayProcessor.hpp"
#include <iostream>

ArrayProcessor::ArrayProcessor() : size(0), array(30) {}

bool ArrayProcessor::enterArraySize() {
    std::cout << "Enter the array size (up to 30): ";
    std::cin >> size;

    if (size <= 0 || size > 30) {
        std::cout << "Invalid size!" << std::endl;
        return false;
    }

    return true;
}

void ArrayProcessor::enterArrayElements() {
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
}

double ArrayProcessor::calculateProduct(int& zeroCount) const {
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

double ArrayProcessor::calculatePositiveSum() const {
    double positiveSum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positiveSum += array[i];
        }
    }
    return positiveSum;
}

double ArrayProcessor::calculateNegativeAverage(double min, double max) const {
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

double ArrayProcessor::findMinPositiveNumber(int& position) const {
    double minPositiveNumber = INT_MAX;
    position = -1;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0 && array[i] < minPositiveNumber) {
            minPositiveNumber = array[i];
            position = i;
        }
    }
    if (position == -1) {
        return 0;
    }
    return minPositiveNumber;
}

void ArrayProcessor::processArray() {
    int choice;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Calculate Sum of Positive Numbers\n";
        std::cout << "2. Calculate Average of Negative Numbers\n";
        std::cout << "3. Calculate Product and Count of Zeros\n";
        std::cout << "4. Find Min Positive Number and Position\n";
        std::cout << "5. Print Array\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double positiveSum = calculatePositiveSum();
                std::cout << "Sum of positive numbers: " << positiveSum << std::endl;
                break;
            }
            case 2: {
                double negativeAverage = calculateNegativeAverage(-10, 10);
                std::cout << "Average of negative numbers: " << negativeAverage << std::endl;
                break;
            }
            case 3: {
                int zeroCount;
                double product = calculateProduct(zeroCount);
                std::cout << "Product of non-zero numbers: " << product << std::endl;
                std::cout << "Number of zeros: " << zeroCount << std::endl;
                break;
            }
            case 4: {
                int position;
                double minPositiveNumber = findMinPositiveNumber(position);
                std::cout << "Minimum positive number is: " << minPositiveNumber;
                if (minPositiveNumber != 0) {
                    std::cout << " and is at position " << (position + 1) << std::endl;
                } else {
                    std::cout << std::endl;
                }
                break;
            }
            case 5: {
                printArray();
                break;
            }
            case 0:
                std::cout << "Exiting the program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);
}

void ArrayProcessor::printArray() const {
    std::cout << "The entered numbers are: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
