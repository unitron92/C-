#include <stdio.h>
#include <string.h>

int main() {
    // Source data
    char source[] = "Hello, memcpy!";
    
    // Destination buffer with enough space to hold the source data
    char destination[50];
    
    // Copy the source data into the destination buffer
    size_t length = strlen(source) + 1;  // +1 to include the null terminator
    memcpy(destination, source, length);
    
    // Ensure the destination string is null-terminated
    destination[length] = '\0';
    
    // Print the copied string
    printf("Copied string: %s\n", destination);
    
    return 0;
}
