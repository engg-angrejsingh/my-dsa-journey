#include <iostream>
using namespace std;

void numDecreasingTriangle(int n) {             // Corrected method name
    for (int i = 1; i <= n; i++) {           // Loop for rows
        for (int j = 1; j <= n - i + 1; j++) {// Loop for columns
            cout << j << " ";                    // Print star
        }
        cout << endl;                        // Move to next line
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the number decreasing triangle: ";
    cin >> n;
    cout << endl;

    numDecreasingTriangle(n);                   // Call function
    return 0;
}
