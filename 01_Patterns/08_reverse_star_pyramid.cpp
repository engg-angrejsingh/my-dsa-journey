#include <iostream>
using namespace std;

// Function to print a centered star pyramid
void reversePyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * n - (2*i+1); j++) {
            cout << "*";
        }
        // Print trailing spaces (optional, for alignment)
        for (int j = 0; j < i ; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the reverse pyramid: ";
    cin >> n;
    cout << endl;

    reversePyramid(n);  // Call function

    return 0;
}
