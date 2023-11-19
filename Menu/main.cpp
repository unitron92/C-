// main.cpp

#include <iostream>
#include "ArrayProcessor.hpp"

int main() {
    ArrayProcessor arrayProcessor;

    while (!arrayProcessor.enterArraySize()) {}
    arrayProcessor.enterArrayElements();

    arrayProcessor.processArray();

    return 0;
}
