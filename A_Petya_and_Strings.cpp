#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        // Convert both characters to lowercase for comparison
        char charA = tolower(a[i]);
        char charB = tolower(b[i]);

        if (charA < charB) {
            cout << "-1" << endl;
            return 0; // Exit early once a difference is found
        } else if (charA > charB) {
            cout << "1" << endl;
            return 0;
        }
    }

    // If the loop finishes without returning, the strings are identical
    cout << "0" << endl;
    return 0;
}