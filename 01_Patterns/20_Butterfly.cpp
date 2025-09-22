#include <iostream>
using namespace std;

void printButterfly(int n) {
    int space = 2 * n - 2;  // initial number of spaces between left and right stars

    // Loop runs for 2*n - 1 rows (top half + bottom half)
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;

        // After the middle row, stars decrease
        if (i > n) stars = 2 * n - i;

        // Left stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        // Middle spaces
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }

        cout << endl;

        // Update spaces: shrink until the middle, then expand
        if (i < n) space -= 2;
        else space += 2;
    }
}

int main() {
    printButterfly(5);
    return 0;
}
