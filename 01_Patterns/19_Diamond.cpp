#include <iostream>
using namespace std;

// Function to print a diamond-like pattern
void diamond(int n)
{
    int space = 0;

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print decreasing stars (left side)
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Print increasing spaces in the middle
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // Print decreasing stars (right side)
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        // Increase spaces for next row
        space += 2;

        cout << endl;
    }

    space -= 2;
    // Lower half of the diamond
    for (int i = 1; i <= n; i++) {
        // Print increasing stars (left side)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Print decreasing spaces in the middle
        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        // Print increasing stars (right side)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Decrease spaces for next row
        space -= 2;

        cout << endl;
    }
}

int main()
{
    // Print diamond with size 5
    diamond(5);
    return 0;
}
