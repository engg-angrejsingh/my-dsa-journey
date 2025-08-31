#include <iostream> // Required for input and output (cin, cout)
using namespace std;

// Function to print a solid square pattern
void solidSquare(int n) {
    // Outer loop for rows
    for (int i = 0; i < n; i++) {
        // Inner loop for columns
        for (int j = 0; j < n; j++) {
            cout << "* "; // Print star with a space
        }
        cout << endl; // Move to the next row after printing one full row
    }
}

int main() {
    int n; // Variable to store size of square

    // Ask user for input
    cout << "Enter the size of the square: ";
    cin >> n;
    cout << endl;

    // Call the function to print the pattern
    solidSquare(n);

    return 0; // End program
}
