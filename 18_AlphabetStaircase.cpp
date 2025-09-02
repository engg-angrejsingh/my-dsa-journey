#include <iostream>
using namespace std;

// Function to print right-aligned alphabet pattern
void printAlphabetStaircase(int n) {
    char lastChar = 'A' + (n - 1); // dynamically calculate last letter
    for (int i = 0; i < n; i++) {
        for (char ch = lastChar - i; ch <= lastChar; ch++) {
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "=== Alphabet Staircase Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    printAlphabetStaircase(n);

    cout << endl << "Pattern generated successfully!" << endl;
    return 0;
}
