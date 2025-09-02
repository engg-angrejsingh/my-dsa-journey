#include <iostream>
using namespace std;

// Function to print a character repetition triangle
void printCharRepeatTriangle(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "=== Character Repetition Triangle Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    printCharRepeatTriangle(n);

    cout << endl << "Pattern generated successfully!" << endl;

    return 0;
}
