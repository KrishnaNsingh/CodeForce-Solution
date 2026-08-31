#include <iostream>
#include <vector>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];

    // 1. Basic Validation: Antisymmetry (No cycles)
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && s[i][j] == '1' && s[j][i] == '1') {
                cout << "No" << endl;
                return;
            }
        }
    }

    // 2. Transitive Reduction: Find edges (u -> v) that are direct
    vector<pair<int, int>> edges;
    for (int u = 0; u < n; ++u) {
        for (int v = 0; v < n; ++v) {
            if (u == v || s[u][v] == '0') continue;

            bool direct = true;
            for (int w = 0; w < n; ++w) {
                if (w != u && w != v && s[u][w] == '1' && s[w][v] == '1') {
                    direct = false; // Path exists through w, so u->v is not an edge
                    break;
                }
            }
            if (direct) edges.push_back({u + 1, v + 1});
        }
    }

    // 3. Tree check: Must have n-1 edges
    if (edges.size() != n - 1) {
        cout << "No" << endl;
        return;
    }

    // 4. Final verification: Does this set of edges reproduce the matrix?
    // We can use a simple reachability check for each node.
    vector<vector<int>> adj(n);
    for (auto& e : edges) adj[e.first - 1].push_back(e.second - 1);

    for (int start = 0; start < n; ++start) {
        vector<bool> visited(n, false);
        vector<int> q = {start};
        visited[start] = true;
        int head = 0;
        while(head < q.size()){
            int curr = q[head++];
            for(int neighbor : adj[curr]){
                if(!visited[neighbor]){
                    visited[neighbor] = true;
                    q.push_back(neighbor);
                }
            }
        }
        for(int j = 0; j < n; ++j){
            if((s[start][j] == '1') != visited[j]){
                cout << "No" << endl;
                return;
            }
        }
    }

    // 5. Undirected Connectivity Check (ensures it's a tree, not a forest)
    vector<vector<int>> u_adj(n);
    for(auto& e : edges){
        u_adj[e.first-1].push_back(e.second-1);
        u_adj[e.second-1].push_back(e.first-1);
    }
    vector<bool> u_visited(n, false);
    vector<int> u_q = {0};
    u_visited[0] = true;
    int u_head = 0;
    while(u_head < u_q.size()){
        int curr = u_q[u_head++];
        for(int nbr : u_adj[curr]) if(!u_visited[nbr]) { u_visited[nbr] = true; u_q.push_back(nbr); }
    }
    if(u_q.size() != n) { cout << "No" << endl; return; }

    cout << "Yes" << endl;
    for (auto& e : edges) cout << e.first << " " << e.second << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}