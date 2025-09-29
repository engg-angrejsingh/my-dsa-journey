#include <iostream>
#include <algorithm>  // for sort()
#include <climits>    // for INT_MAX
using namespace std;

/*
    Function: secondLargestElementBrute
    Approach: Brute Force (Sorting)
    Time Complexity: O(n log n) -> due to sorting
    Space Complexity: O(1) -> in-place sorting
*/
int secondLargestElementBrute(int arr[], int n) {
    sort(arr, arr + n);  // Sort array in ascending order

    int largest = arr[n - 1];   // Last element is the largest

    // Traverse backwards to find the first element smaller than 'largest'
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            return arr[i];  // Found the second largest element
        }
    }

    return -1;  // If all elements are equal, return -1
}

/*
    Function: secondLargestElementOptimal
    Approach: Single pass (no sorting)
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
int secondLargestElementOptimal(int arr[], int n) {
    int largest = arr[0];
    int slargest = -1;   // Initialize second largest as -1 (assuming array has positives)

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            slargest = largest;   // Update second largest
            largest = arr[i];     // Update largest
        }
        else if (arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];    // Update second largest
        }
    }

    return slargest;
}

/*
    Function: secondSmallestElementOptimal
    Approach: Single pass
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
int secondSmallestElementOptimal(int arr[], int n) {
    int smallest = arr[0];
    int ssmallest = INT_MAX;   // Initialize to maximum possible int

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            ssmallest = smallest;   // Update second smallest
            smallest = arr[i];      // Update smallest
        }
        else if (arr[i] > smallest && arr[i] < ssmallest) {
            ssmallest = arr[i];     // Update second smallest
        }
    }

    return ssmallest;
}

int main() {
    // Initialize array
    int arr[] = {4, 7, 8, 9, 7, 5, 9, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);  // Number of elements in array

    // Brute force method
    int result = secondLargestElementBrute(arr, n);
    cout << "Second Largest (Brute Force): " << result << endl;

    // Optimal method (largest)
    int result1 = secondLargestElementOptimal(arr, n);
    cout << "Second Largest (Optimal): " << result1 << endl;

    // Optimal method (smallest)
    int result2 = secondSmallestElementOptimal(arr, n);
    cout << "Second Smallest (Optimal): " << result2 << endl;

    return 0;
}
