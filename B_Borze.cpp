#include <iostream>
#include <vector>
using namespace std;

int main(){
    string code;
    cin >> code;
    int n = code.size();
    vector<int> ans;
    int temp=0;
    while(temp != n){
        char a = code[temp];
        char b = code[temp + 1];
        if(a == '.'){
            ans.push_back(0);
            temp ++;
        }
        else{
            if(b == '-'){
                ans.push_back(2);
            }else{
                ans.push_back(1);
            }
            temp += 2;
        }
    }
    for(int i : ans){
        cout << i;
    }
    cout << endl;
    return 0 ;
}