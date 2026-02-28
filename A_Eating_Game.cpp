#include <iostream>
#include <vector>
#include <set>

using namespace std;

// Simulates the game starting from a specific player
// Returns the index of the player who eats the last dish
int simulate(int start_player, int n, vector<int> a) {
    int total_dishes = 0;
    for (int x : a) total_dishes += x;

    int current = start_player - 1; // 0-indexed for calculation
    int last_eater = -1;

    while (total_dishes > 0) {
        if (a[current] > 0) {
            a[current]--;
            total_dishes--;
            last_eater = current + 1; // Store 1-indexed winner
        }
        // Move to the next player in the circle
        current = (current + 1) % n;
    }
    return last_eater;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<int> possible_winners;

    // Try starting the game with each player from 1 to n
    for (int i = 1; i <= n; i++) {
        possible_winners.insert(simulate(i, n, a));
    }

    // The answer is the number of unique winners found
    cout << possible_winners.size() << endl;
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