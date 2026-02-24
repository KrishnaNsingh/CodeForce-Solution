#include <iostream>
#include <vector>
using namespace std;

int main(){
    int numMagnets;
    cin>> numMagnets;
    int count = 1;
    vector<int> ans ;

    for(int i=0; i<numMagnets; i++){
        int position;
        cin >> position;
        ans.push_back(position);
    }
    for(int i=1; i<numMagnets; i++){
        if(ans[i] != ans[i-1]){
            count++;
        }
    }
    cout << count;   
}