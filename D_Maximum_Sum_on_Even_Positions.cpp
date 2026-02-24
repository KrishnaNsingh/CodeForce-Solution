#include <iostream>
#include <vector>
#include <climits>
using namespace std;

long long kadane(vector<long long> &v) {
    long long maxSum = 0;
    long long curr = 0;
    for (auto x : v) {
        curr = max(x, curr + x);
        maxSum = max(maxSum, curr);
    }
    return maxSum;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        
        // Step 1: Base sum (even indices)
        long long base = 0;
        for (int i = 0; i < n; i += 2)
            base += nums[i];
        
        // Step 2: Build gain arrays
        vector<long long> A, B;
        
        // Case A
        for (int i = 1; i < n; i += 2)
            A.push_back(nums[i] - nums[i - 1]);
        
        // Case B
        for (int i = 2; i < n; i += 2)
            B.push_back(nums[i - 1] - nums[i]);
        
        // Step 3
        long long gain = max(kadane(A), kadane(B));
        
        // Step 4
        cout << base + gain << endl;
    }
}