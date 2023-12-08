// main.cpp
// Author: Djaner
// Created on: 20.11.2023
// Description: This is the main file for the array operations program. It includes the
//              necessary headers and defines the main function to interact with the user
//              and perform various operations on arrays using functions declared in
//              the "array_operations.hpp" header.

#include <iostream>
#include "array_operations.hpp"

using namespace std;

int main() {
    // Declare variables for array manipulation
    int size;
    double array[MAX_SIZE];
    double positiveSum, negativeAverage, product;
    int zeroCount, position;
    double minPositiveNumber;

    // Get array size and elements from the user
    while (!enterArraySize(size)) {}
    enterArrayElements(array, size);

    // Display menu and process user's choice
    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Сума от положителни числа\n";
        cout << "2. Средно-аритметично от отрицателни числа\n";
        cout << "3. Произведение на различни от нула числа\n";
        cout << "4. Брой на нулевите числа\n";
        cout << "5. Минимално положително число и позиция\n";
        cout << "6. Изход\n";
        cout << "Изберете опция: ";
        cin >> choice;

        switch (choice) {
            case 1:
                positiveSum = calculatePositiveSum(array, size);
                cout << "Сумата от положителните числа е: " << positiveSum << endl;
                break;

            case 2:
                negativeAverage = calculateNegativeAverage(array, size, -10, 10);
                cout << "Средно-аритметичното от отрицателните числа е: " << negativeAverage << endl;
                break;

            case 3:
                product = calculateProduct(array, size, zeroCount);
                cout << "Произведението на различните от нула числа е: " << product << endl;
                break;

            case 4:
                cout << "Броят на нулевите числа е: " << zeroCount << endl;
                break;

            case 5:
                minPositiveNumber = findMinPositiveNumber(array, size, position);
                cout << "Минималното положително число е: " << minPositiveNumber;
                if (minPositiveNumber != 0) {
                    cout << " и е на " << (position + 1) << " - ми места" << endl;
                } else {
                    cout << endl;
                }
                break;

            case 6:
                cout << "Изход от програмата.\n";
                break;

            default:
                cout << "Невалиден избор. Опитайте отново.\n";
        }
    } while (choice != 6);

    // Print the modified array
    printArray(array, size);

    return 0;
}

