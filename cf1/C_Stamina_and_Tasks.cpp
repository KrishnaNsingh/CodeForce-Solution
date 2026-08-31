#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    cout << fixed << setprecision(10);

    while(t--){
        int n;
        cin >> n;

        vector<double> c(n), p(n);

        for(int i=0;i<n;i++)
            cin >> c[i] >> p[i];

        double future = 0.0;

        for(int i=n-1;i>=0;i--){
            double r = 1.0 - p[i]/100.0;
            future = max(future, c[i] + r * future);
        }

        cout << future << "\n";
    }
}