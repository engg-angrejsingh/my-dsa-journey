#include <iostream>
using namespace std;

void printConcentricSquare(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top    = i;
            int left   = j;
            int right  = (2 * n - 2) - j;
            int bottom = (2 * n - 2) - i;

            // Find the minimum distance to any edge
            int layer = min(min(top, bottom), min(left, right));

            // Print number based on layer
            cout << (n - layer);
        }
        cout << endl;
    }
}

int main() {
    printConcentricSquare(4);
    return 0;
}
