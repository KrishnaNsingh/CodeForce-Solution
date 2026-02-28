#include <iostream>
#include <vector>
#include <string>

using namespace std;

/**
 * Solves a single test case using Interval DP.
 * dp[i][j] will be true if the substring s[i...j] can be fully cleared.
 */
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // If length is odd, it's impossible to pair everything up.
    if (n % 2 != 0) {
        cout << "NO" << endl;
        return;
    }

    // dp[i][j] stores whether s[i...j] can be cleared.
    // Indexing is 0 to n-1.
    vector<vector<bool>> dp(n, vector<bool>(n, false));

    // Length of the substring we are considering
    for (int len = 2; len <= n; len += 2) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;

            // Option 1: Match the endpoints s[i] and s[j]
            // This is valid if the characters are the same and 
            // the string between them (if any) is already clearable.
            if (s[i] == s[j]) {
                if (len == 2 || dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                }
            }

            // Option 2: Try splitting the substring into two clearable parts
            // s[i...k] and s[k+1...j]
            if (!dp[i][j]) {
                for (int k = i + 1; k < j; k += 2) {
                    if (dp[i][k] && dp[k + 1][j]) {
                        dp[i][j] = true;
                        break;
                    }
                }
            }
        }
    }

    if (dp[0][n - 1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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