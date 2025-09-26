#include <iostream>
#include <algorithm> // for sort()
using namespace std;

// Brute Force: Sort array and return last element
// Time Complexity: O(n log n)
// Space Complexity: O(1) if sort is in-place
int largestElementBrute(int arr[], int n) {
    sort(arr, arr + n);       // Sort the array
    return arr[n - 1];        // Last element is the largest
}

// Optimal: Traverse once and track maximum
// Time Complexity: O(n)
// Space Complexity: O(1)
int largestElementOptimal(int arr[], int n) {
    int largest = arr[0];      // Assume first element is largest
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  // Update if larger element found
        }
    }
    return largest;
}

int main() {
    int arr[] = {4, 8, 9, 3, 7, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Brute force approach
    int resultBrute = largestElementBrute(arr, n);
    cout << "Brute Force Largest: " << resultBrute << endl;

    // Optimal approach
    int resultOptimal = largestElementOptimal(arr, n);
    cout << "Optimal Largest: " << resultOptimal << endl;

    return 0;
}
