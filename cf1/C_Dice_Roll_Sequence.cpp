#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        // dp[v] = cost for previous position
        vector<int> dp(7, 1e9), new_dp(7);

        // Base case for first element
        for(int v = 1; v <= 6; v++){
            dp[v] = (a[0] == v ? 0 : 1);
        }

        for(int i = 1; i < n; i++){
            fill(new_dp.begin(), new_dp.end(), 1e9);

            for(int v = 1; v <= 6; v++){
                for(int u = 1; u <= 6; u++){
                    if(u != v && u != 7 - v){
                        int cost = dp[u] + (a[i] == v ? 0 : 1);
                        new_dp[v] = min(new_dp[v], cost);
                    }
                }
            }

            dp = new_dp;
        }

        int ans = *min_element(dp.begin() + 1, dp.end());
        cout << ans << "\n";
    }

    return 0;
}
