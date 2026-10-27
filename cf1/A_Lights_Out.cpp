#include <iostream>

using namespace std;

int main() {
    int a[3][3];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            // Count total presses affecting cell (i, j)
            int total = a[i][j];
            if (i > 0) total += a[i - 1][j]; // Top
            if (i < 2) total += a[i + 1][j]; // Bottom
            if (j > 0) total += a[i][j - 1]; // Left
            if (j < 2) total += a[i][j + 1]; // Right

            // Starts at 1. If total presses is odd, it toggles to 0. 
            // If total presses is even, it stays 1.
            if (total % 2 == 1) {
                cout << 0;
            } else {
                cout << 1;
            }
        }
        cout << "\n";
    }

    return 0;
}
