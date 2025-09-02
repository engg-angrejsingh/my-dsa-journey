#include <iostream>
using namespace std;

// Function to print an inverted alphabet triangle
void printInvertedAlphabetTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";  // 65 = ASCII for 'A'
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "=== Inverted Alphabet Triangle Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    printInvertedAlphabetTriangle(n);

    cout << endl << "Pattern generated successfully!" << endl;

    return 0;
}
