#include <iostream>
using namespace std;

// Function to print a binary triangle pattern
void printBinaryTriangle(int n) {
    for (int i = 0; i < n; i++) {
        int start = (i % 2 == 0) ? 1 : 0;  // Start with 1 for even rows, 0 for odd rows

        for (int j = 0; j <= i; j++) {
            cout << start << " ";          // Print the current value
            start = 1 - start;             // Flip between 1 and 0
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the binary triangle: ";
    cin >> n;
    cout << endl;

    printBinaryTriangle(n);

    return 0;
}
