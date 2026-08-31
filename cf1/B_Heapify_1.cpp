#include <iostream>
using namespace std;

int getRoot(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        bool possible = true;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            if (getRoot(i) != getRoot(x)) {
                possible = false;
            }
        }

        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
}
