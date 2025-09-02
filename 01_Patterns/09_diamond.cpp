#include <iostream>
using namespace std;

// Function to print a diamond pattern of size n
void printDiamond(int n) {
    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;
    cout << endl;

    printDiamond(n);

    return 0;
}
