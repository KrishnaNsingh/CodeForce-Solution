#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int numDigit;
    cin >> numDigit;
    vector<int> list = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = list.size();
    
    for(int i=0; i<numDigit; i++){
        int num ;
        cin>> num;
        vector<int> ans ; 
        if(num < 10){
            ans.push_back(num);
        }
        else{
            for(int j=0; j<n; j++){
                if(num - list[j] >= 0){
                    num = num - list[j];
                    ans.push_back(list[j]);
                    if(num == 0) break;
                }
            }    
        }
        int k = ans.size();
        for(int l=k-1; l>=0; l--){
            cout << ans[l] ;
        }
        cout << endl;
    }
    return 0;
}