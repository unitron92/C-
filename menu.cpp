#include <iostream>
#include <climits>

using namespace std;

int enterArraySize(int& size) {
    cout << "Въведете размерност на масива (до 30): ";
    cin >> size;

    if (size <= 0 || size > 30) {
        cout << "Невалидна размерност!";
        return 0;
    }

    return 1;
}

void enterArrayElements(double*& array, int size) {
    array = new double[size];
    cout << "Въведете елементите на масива: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

double calculatePositiveSum(const double* array, int size) {
    double positiveSum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) {
            positiveSum += array[i];
        }
    }
    return positiveSum;
}

double calculateNegativeAverage(const double* array, int size, double min, double max) {
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

double calculateProduct(const double* array, int size, int& zeroCount) {
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

double findMinPositiveNumber(const double* array, int size, int& position) {
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

void printArray(const double* array, int size) {
    cout << "Въведените числа са: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    double* array = nullptr;
    double positiveSum, negativeAverage, product;
    int zeroCount, position;
    double minPositiveNumber;

    while (!enterArraySize(size)) {}
    enterArrayElements(array, size);

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

    printArray(array, size);

    // Don't forget to free the dynamically allocated memory
    delete[] array;

    return 0;
}
