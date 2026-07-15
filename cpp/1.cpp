#include <iostream>
#include <vector>
using namespace std;
// print 6, 28, 66, 120, 190, 276, 378 in a parimid if 
// input 2 print 00006
 //              00028 00066
int main() {
    
    vector<int> ans = {6, 28}; 
    
    int num;
    cin >> num; 

    int total = (num*(num+1))/2;

    for(int i=0; i<total; i++){
        int diff = ans[ans.size()-1] - ans[ans.size()-2];
        int n = diff + 16; 
        ans.push_back(n+ans[ans.size()-1]);
    }   

    int index = 0;
    for(int i = 1; i <= num; i++){
        for (int j = 1; j <= i; j++){
            cout << ans[index] << " ";
                index++;
        }
        cout << endl;
    }
    return 0;
}