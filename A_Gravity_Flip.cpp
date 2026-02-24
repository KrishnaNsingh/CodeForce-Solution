#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    int boxCol;
    cin >> boxCol;

    vector<int> ans;
    for(int i=0; i<boxCol; i++){
        int input;
        cin >> input;
        ans.push_back(input);
    }
    sort(ans.begin() , ans.end());

    for(int i=0; i<boxCol; i++){
        cout << ans[i] << " ";
    }
}