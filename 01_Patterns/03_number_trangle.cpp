#include <iostream>
using namespace std;

void numberTriangle(int n) {
    for (int i = 0; i <= n; i++) {          // Loop for rows
        for (int j = 0; j <= i; j++) {      // Loop for columns
            cout << i << " ";               // Print row number
        }
        cout << endl;                       // Move to next line
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the number triangle: ";
    cin >> n;

    numberTriangle(n);                       // Function call
    return 0;
}
