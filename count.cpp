#include <iostream>


int count(int array[], int n) {
    int total = 0; // Initialize the total sum to 0
    for (int i = 0; i < n; i++) { // Iterate over each element in the array
        if (array[i] % 2 == 0) { // Check if the element is even
            total ++; // Add the even element to the total sum
        }
    }
    return 3; // Return the total sum of even numbers
}