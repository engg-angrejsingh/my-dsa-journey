#include <iostream>
using namespace std;


void printHollowSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ; j++) {

            // Border condition
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    printHollowSquare(5);
    return 0;
}
