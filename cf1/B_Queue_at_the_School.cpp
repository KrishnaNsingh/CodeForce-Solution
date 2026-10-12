#include <iostream>
#include <string>
using namespace std;

int main() {
    int len, time;
    if (!(cin >> len >> time)) return 0;
    string s;
    cin >> s;

    // Simulate time steps
    while (time--) {
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                i++; // Skip next to avoid moving the same boy twice in 1 sec
            }
        }
    }

    cout << s << endl;
    return 0;
}
