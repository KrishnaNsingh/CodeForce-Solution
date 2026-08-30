#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    int l = 0;
    int max_turn = 0;
    for(int i=0; i<n; i++){
        int x = (a[i] + m - 1)/m;
        if(x >= max_turn){
            l = i+1;
            max_turn = x;
        }
    }
    cout << l << endl;
    return 0;
}