#include <iostream>
#include <cstring>

int main() {
    char data[10] = "Hello,";

    // Define source and destination pointers
    char* source = data + 1; // Points to "e"
    char* destination = data + 3; // Points to "l"

    // Number of bytes to copy
    size_t numBytes = 5;

    // Use memmove to copy data with potential overlap
    memmove(destination, source, numBytes);

    // Ensure the null terminator
    data[8] = '\0';

    // Print the result
    std::cout << "Result: " << data << std::endl;

    return 0;
}
