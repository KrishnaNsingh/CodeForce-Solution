#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= 1000000007;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % 1000000007;
        base = (base * base) % 1000000007;
        exp /= 2;
    }
    return res;
}

long long modInverse(long long n) {
    return power(n, 1000000007 - 2);
}

void solve() {
    int n;
    long long x;
    cin >> n >> x;
    
    vector<long long> scaling_factors;
    vector<long long> additives;
    long long MOD = 1000000007;
    long long total_P = 1;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        char op = s[0];
        long long y = stoll(s.substr(1));

        if (op == 'x') {
            scaling_factors.push_back(y % MOD);
            total_P = (total_P * (y % MOD)) % MOD;
        } else if (op == '/') {
            long long invY = modInverse(y);
            scaling_factors.push_back(invY);
            total_P = (total_P * invY) % MOD;
        } else if (op == '+') {
            additives.push_back(y % MOD);
        } else if (op == '-') {
            additives.push_back((MOD - (y % MOD)) % MOD);
        }
    }

    // Expected value = x * total_P + sum(add_i * Expected_Scaling_After_i)
    // The expected multiplier for an additive term in a random permutation 
    // among k scaling operations is the average of scaling prefixes.
    
    int k = scaling_factors.size();
    long long expected_scaling_after = 0;
    
    // If an additive op is at position j (0-indexed) among the n positions,
    // it is followed by a random subset of the scaling ops.
    // By symmetry, each scaling factor v_j has a 1/(n) chance of being 
    // in any specific slot. 
    
    // A simpler way: The contribution of an additive op 'a' is:
    // a * (1 + v_avg + v_avg^2 ... ) is not right because they are distinct.
    // The expected multiplier for any additive op is:
    // (1/n) * sum_{slots j=1 to n} (Expected product of scaling ops in slots > j)
    
    vector<long long> suffix_sum_multiplier(n + 1, 0);
    // This part requires calculating the average multiplier for an element 
    // inserted into a random permutation.
    
    long long total_add = 0;
    for (long long a : additives) total_add = (total_add + a) % MOD;

    // Correct logic for expected multiplier of an additive term:
    // Let S be the set of scaling factors. Expected multiplier = 
    // 1/(k+1) * [ 1 + (sum v_i)/k + (sum v_i v_j)/(k choose 2) ... + total_P ]
    // This is equivalent to: (1/(k+1)) * (Product(1 + v_i))
    
    long long exp_mult = 1;
    for (long long v : scaling_factors) {
        exp_mult = (exp_mult * (v + 1)) % MOD;
    }
    exp_mult = (exp_mult * modInverse(k + 1)) % MOD;

    long long ans = (x % MOD * total_P) % MOD;
    ans = (ans + (total_add * exp_mult) % MOD) % MOD;

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}