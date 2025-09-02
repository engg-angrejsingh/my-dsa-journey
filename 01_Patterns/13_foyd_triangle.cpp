#include <iostream>
using namespace std;

// Function to print Floyd's Triangle pattern
void printFloydTriangle(int n) {
    int num = 1; // starting number
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    int n;

    cout << "=== Floyd's Triangle Generator ===" << endl;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << endl;

    printFloydTriangle(n);

    cout << endl << "Pattern generated successfully!" << endl;

    return 0;
}
