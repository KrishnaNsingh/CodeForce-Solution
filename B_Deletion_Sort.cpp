#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Check if the array is already non-decreasing
    bool already_sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            already_sorted = false;
            break;
        }
    }

    if (already_sorted) {
        // Game ends immediately
        cout << n << endl;
    } else {
        // We can remove elements one by one until only 1 remains.
        // Once 1 element remains, it is non-decreasing and the game ends.
        cout << 1 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}