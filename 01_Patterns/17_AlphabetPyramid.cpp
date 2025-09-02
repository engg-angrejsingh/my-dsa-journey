#include <iostream>
using namespace std;

// Function to print a centered alphabet pyramid
void printAlphabetPyramid(int n) {
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Print ascending and descending letters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }

        // Print trailing spaces (optional, keeps symmetry)
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "=== Alphabet Pyramid Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    printAlphabetPyramid(n);

    cout << endl << "Pattern generated successfully!" << endl;
    return 0;
}
