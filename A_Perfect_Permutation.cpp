#include <iostream>
#include <vector>
using namespace std;

int main(){
    int num;
    cin >> num;
    if(num%2!=0){
        cout << -1 << endl;
        return 0;
    }
    vector<int> ans;
    for(int i=1; i<=num; i++){
        ans.push_back(i);
    }
    for(int i=0; i<ans.size()-1; i+=2){
        int temp = ans[i];
        ans[i] = ans[i+1];
        ans[i+1] = temp;
    }
    for(int c : ans){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}