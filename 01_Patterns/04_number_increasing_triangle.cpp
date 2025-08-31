#include <iostream>
using namespace std;

void increasingTriangle(int n) {
    for (int i = 1; i <= n; i++) {          // Loop for rows
        for (int j = 1; j <= i; j++) {      // Loop for columns
            cout << i << " ";               // Print current row number
        }
        cout << endl;                       // Move to next line
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the number triangle: ";
    cin >> n;
    cout << endl;

    increasingTriangle(n);                       // Call function
    return 0;
}
