#include <iostream>

int find_max_element(int *arr, int size) {
    // Check if the array is empty
    if (size == 0)
        return size; // Return minimum integer value as an error code

    int max_element = *arr; // Initialize max_element with the first element of the array

    // Traverse the array to find the maximum element
    for (int i = 1; i < size; ++i) {
        if (*(arr + i) > max_element) { // Compare current element with max_element
            max_element = *(arr + i); // Update max_element if necessary
        }
    }

    return max_element;
}

int main() {
    int arr[] = {10, 5, 20, 15, 25};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max_element = find_max_element(arr, size);
    std::cout << "The maximum element in the array is: " << max_element << std::endl;

    return 0;
}
