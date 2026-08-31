#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

// Function to calculate f_i(j)
int get_f(ll i, ll j) {
    if (j == 0) return 0;
    int k = 0;
    while (j % i == 0) {
        k++;
        j /= i;
    }
    return k;
}

// Check if a number is special: f_6(j) > f_7(j)
bool is_special(ll j) {
    if (j <= 0) return false;
    int f6 = min(get_f(2, j), get_f(3, j));
    int f7 = get_f(7, j);
    return f6 > f7;
}

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // The smallest x is likely small because special numbers are dense (1/6 - 1/42).
    // We check x from 0 up to a reasonable limit. 
    // Given the constraints and the 2s time limit, we can check 
    // a significant range of x.
    for (ll x = 0; x <= 1000000; x++) {
        bool all_special = true;
        for (int i = 0; i < n; i++) {
            if (!is_special(a[i] + x)) {
                all_special = false;
                break;
            }
        }
        if (all_special) {
            cout << x << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}