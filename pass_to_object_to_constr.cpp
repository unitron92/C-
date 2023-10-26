#include <iostream>

// Example class bsp::IfAdc
class IfAdc {
public:
    IfAdc(int id) : id_(id) {}

    int getId() const {
        return id_;
    }

private:
    int id_;
};

// Example class hal::IfPortAccess
class IfPortAccess {
public:
    IfPortAccess(int portNumber) : portNumber_(portNumber) {}

    int getPortNumber() const {
        return portNumber_;
    }

private:
    int portNumber_;
};

// FuSa class definition
class FuSa {
public:
    // Constructor declaration with an initializer list
    FuSa(IfAdc& adcIf, IfPortAccess& port) :
        adc(adcIf), portDrv(port) {
        // Constructor code (if needed)
    }

    // Member function to print information
    void printInfo() const {
        std::cout << "FuSa Info:" << std::endl;
        std::cout << "ADC ID: " << adc.getId() << std::endl;
        std::cout << "Port Number: " << portDrv.getPortNumber() << std::endl;
    }

private:
    IfAdc& adc;           // Member variable to hold a reference to IfAdc
    IfPortAccess& portDrv; // Member variable to hold a reference to IfPortAccess
};

int main() {
    // Create instances of IfAdc and IfPortAccess
    IfAdc adcInstance(123);
    IfPortAccess portInstance(456);

    // Create an instance of FuSa using the constructor
    FuSa fusaInstance(adcInstance, portInstance);

    // Use the printInfo() member function to print the initialized values
    fusaInstance.printInfo();

    return 0;
}
