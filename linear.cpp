#include <iostream>

int linearSearch(int arr[], int size, int target, int& iterations) {
    for (int i = 0; i < size; i++) {
        iterations++; // Increment the iteration count
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found, return -1
}

int main() {
    int arr[] = {2, 5, 3, 7, 1, 8, 6};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);
    int iterations = 0;

    int result = linearSearch(arr, size, target, iterations);

    if (result != -1) {
        std::cout << "Element " << target << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    std::cout << "Total iterations: " << iterations << std::endl;

    return 0;
}
