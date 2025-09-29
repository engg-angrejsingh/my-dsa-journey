#include <iostream> 
using namespace std;

/*
Brute Force Approach:
- Compare every element with all elements after it.
Time Complexity:
  - Worst Case: O(n^2), because nested loops check all pairs
  - Best Case : O(n^2), still compares pairs
  - Average Case: O(n^2)
Space Complexity: O(1), only a few variables used
*/
bool CheckArraySortedBrute(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) return false;
        }
    }
    return true;
}

/*
Optimal Approach:
- Just compare each element with its previous one.
Time Complexity:
  - Best Case : O(1), if disorder found at the start
  - Worst Case: O(n), if fully sorted
  - Average Case: O(n)
Space Complexity: O(1), no extra space used
*/
bool CheckArraySortedOptimal(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false; // Not sorted
        }
    }
    return true;
}

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    // Function calls
    bool BruteResult   = CheckArraySortedBrute(arr, n);
    bool OptimalResult = CheckArraySortedOptimal(arr, n);

    // Store result in string array for easy printing
    string res[] = {"false", "true"};

    // Display results clearly
    cout << "Brute Force Result  : " << res[BruteResult] << endl;
    cout << "Optimal Result      : " << res[OptimalResult] << endl;

    return 0;
}

