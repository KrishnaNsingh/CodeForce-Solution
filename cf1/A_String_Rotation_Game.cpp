#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        // Special case: single character
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }

        int blocks = 0;

        // Count transitions between adjacent characters
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) {
                blocks++;
            }
        }

        // Check circular transition (last -> first)
        if(s[n - 1] != s[0]) {
            blocks++;
        }

        cout << blocks << endl;
    }

    return 0;
}