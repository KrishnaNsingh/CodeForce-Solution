#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    vector<long long> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    sort(nums.begin(), nums.end());

    long long mid = n / 2;
    long long current = nums[mid];
    long long count = 1; // how many elements we are lifting

    for (int i = mid + 1; i < n; i++) {
        long long diff = nums[i] - current;
        long long need = diff * count;

        if (k >= need) {
            k -= need;
            current = nums[i];
            count++;
        } else {
            current += k / count;
            k = 0;
            break;
        }
    }

    if (k > 0) {
        current += k / count;
    }

    cout << current << endl;
}