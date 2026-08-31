#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> f(n + 1);
    for (int i = 1; i <= n; i++) cin >> f[i];

    if (n == 2) {
        // Special case for n=2
        // f(1) = a2, f(2) = a1
        cout << f[2] << " " << f[1] << endl;
        return;
    }

    vector<long long> a(n + 1);
    long long sum_mid_weighted = 0;
    long long sum_mid = 0;

    for (int i = 2; i <= n - 1; i++) {
        a[i] = (f[i + 1] - 2 * f[i] + f[i - 1]) / 2;
        sum_mid_weighted += a[i] * (i - 1);
        sum_mid += a[i];
    }

    // f(1) = 0*a1 + a2*1 + a3*2 ... + an*(n-1)
    a[n] = (f[1] - sum_mid_weighted) / (n - 1);
    
    // a1 = f(2) - f(1) + sum(a2...an)
    a[1] = f[2] - f[1] + sum_mid + a[n];

    for (int i = 1; i <= n; i++) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}