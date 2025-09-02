#include <iostream>
using namespace std;

// Function to print a mirrored numeric pyramid pattern
void printMirroredPyramid(int n) {
    int space = 2 * (n-1);
    for (int i = 1; i <= n; i++) {
        // Print ascending numbers (left side)
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Print spaces 
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
    
        // Print descending numbers (right side)
        for (int j = i; j > 0; j--) {
            cout << j;
        }

        // Move to the next line
        cout << endl;
        space -= 2;
    }
}

int main() {
    int n;

    cout << "=== Mirrored Numeric Pyramid Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    // Call function to print the pattern
    printMirroredPyramid(n);

    cout << endl << "Pattern generated successfully!" << endl;

    return 0;
}
