#include <iostream>
#include <algorithm> // for sort()
using namespace std;

// Function to find the second largest element using brute force (sorting)
// Time Complexity: O(n log n) -> due to sorting the array
// Space Complexity: O(1) -> sorting is done in-place
int secondLargestElementBrute(int arr[], int n) {
    sort(arr, arr + n);  // Sort array in ascending order

    int largest = arr[n - 1];   // Last element after sorting is the largest

    // Traverse from second last element towards the beginning
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) { // Find first element smaller than largest
            return arr[i];       // This is the second largest element
        }
    }

    return -1;  // Return -1 if all elements are equal (no second largest)
}

int main() {
    // Initialize array
    int arr[] = {4, 7, 8, 9, 7, 5, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate size of array

    // Call function to find second largest element
    int result = secondLargestElementBrute(arr, n);

    // Print the result
    cout << "Second Largest: " << result << endl;

    return 0;
}
