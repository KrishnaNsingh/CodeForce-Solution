#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int count = 0;
    
    vector<int> ans;
    for(int i=0; i<4; i++){
        int temp;
        cin >> temp;
        ans.push_back(temp);
    }
    sort(ans.begin() , ans.end());
    int temp1 = ans[0];
    
    for(int i=1; i<4; i++){
        if(temp1 == ans[i]){
            count++;
        }else{
            temp1 = ans[i];
        }
    }
    cout << count << endl;
    return 0;
}