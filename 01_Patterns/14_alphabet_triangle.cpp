#include <iostream>
using namespace std;

// Function to print an alphabet triangle
void printAlphabetTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";  
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "=== Alphabet Triangle Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    printAlphabetTriangle(n);

    cout << endl << "Pattern generated successfully!" << endl;

    return 0;
}
