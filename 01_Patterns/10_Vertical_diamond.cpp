#include <iostream>
using namespace std;

// Function to print a vertical diamond/star pattern
void printVerticalDiamond(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        // Determine the number of stars for the current row
        int stars = (i <= n) ? i : (2 * n - i);

        // Print the stars for this row
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the diamond: ";
    cin >> n;
    cout << endl;

    printVerticalDiamond(n);

    return 0;
}
