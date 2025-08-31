#include <iostream>
using namespace std;

void decreasingTriangle(int n) {             // Corrected method name
    for (int i = 1; i <= n; i++) {           // Loop for rows
        for (int j = 0; j < n - i + 1; j++) {// Loop for columns
            cout << "* ";                    // Print star
        }
        cout << endl;                        // Move to next line
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the decreasing triangle: ";
    cin >> n;
    cout << endl;

    decreasingTriangle(n);                   // Call function
    return 0;
}
