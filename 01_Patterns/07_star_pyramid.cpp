#include <iostream>
using namespace std;

// Function to print a centered star pyramid
void pyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j <n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Print trailing spaces (optional, for alignment)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the pyramid: ";
    cin >> n;
    cout << endl;

    pyramid(n);  // Call function

    return 0;
}
