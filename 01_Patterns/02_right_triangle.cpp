#include <iostream> // Required for input and output (cin, cout)
using namespace std;

// Function to print a right-angled triangle pattern
void rightTriangle(int n) {
    // Outer loop for rows (controls how many lines to print)
    for (int i = 0; i < n; i++) {
        // Inner loop for columns (prints stars for the current row)
        for (int j = 0; j <= i; j++) {
            cout << "* "; // Print star with a space
        }
        cout << endl; // Move to the next line after finishing one row
    }
}

int main() {
    int n; // Variable to store the size (number of rows)

    // Ask user for input
    cout << "Enter the number of rows for the right triangle: ";
    cin >> n;
    cout << endl;

    // Call the function to print the pattern
    rightTriangle(n);

    return 0; // End program
}
