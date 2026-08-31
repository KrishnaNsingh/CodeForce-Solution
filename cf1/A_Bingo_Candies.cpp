#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        unordered_map<int,int> freq;
        int x;

        for (int i = 0; i < n*n; i++) {
            cin >> x;
            freq[x]++;
        }

        int mx = 0;
        for (auto &p : freq)
            mx = max(mx, p.second);

        if (mx > n*(n-1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}