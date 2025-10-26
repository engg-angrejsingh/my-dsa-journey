#include <iostream>
using namespace std;

/*
 * Function: leftRotate
 * --------------------
 * Rotates an array 'arr' of size 'n' to the left by 'd' positions.
 *
 * Example:
 * arr = [1, 2, 3, 4, 5], d = 2  →  [3, 4, 5, 1, 2]
 *
 * Time Complexity: O(n)
 *   - Copying first d elements → O(d)
 *   - Shifting remaining elements → O(n - d)
 *   - Copying temp elements back → O(d)
 *   - Total = O(n)
 *
 * Space Complexity: O(d)
 *   - Temporary array of size d
 */
void leftRotate(int arr[], int n, int d) {
    d = d % n;  // In case d > n, reduce unnecessary rotations
    if (d == 0) return; // No rotation needed if d is 0

    int temp[d];  // Temporary array to store first d elements

    // Step 1: Copy first d elements to temp
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Step 2: Shift the remaining elements left by d positions
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    // Step 3: Copy the elements from temp to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int d;
    cout << "Enter number of positions to rotate: ";
    cin >> d;

    leftRotate(arr, n, d);

    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
