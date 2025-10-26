#include <iostream>
using namespace std;

/*
  Function: removeDuplicates
  Purpose: Removes duplicate elements from a sorted array in-place.

  Time Complexity:  O(n)
      - We traverse the array once using two pointers (i and j).
      - Each comparison and possible assignment is O(1).

  Space Complexity: O(1)
      - We modify the input array directly, without using extra space.

  Parameters:
      arr[] : sorted array of integers
      n     : number of elements in arr

  Returns:
      The count of unique elements (new length of the array).
*/
int removeDuplicates(int arr[], int n) {
    // Handle empty array edge case
    if (n == 0) return 0;

    // i represents the index of the last unique element found
    int i = 0;

    // j scans through the array to find new unique elements
    for (int j = 1; j < n; j++) {
        // When a new unique element is found
        if (arr[i] != arr[j]) {
            i++;              // Move i forward
            arr[i] = arr[j];  // Store the new unique element at the next position
        }
    }

    // Number of unique elements = i + 1 (because i is zero-indexed)
    return i + 1;
}

int main() {
    // Input array (sorted and contains duplicates)
    int arr[] = {3, 3, 4, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements

    // Call the function to remove duplicates
    int newLength = removeDuplicates(arr, n);

    // Display only the unique elements
    cout << "Unique elements:" << endl;
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
