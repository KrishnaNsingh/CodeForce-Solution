#include <iostream>
#include <vector>
using namespace std;

vector<int> arr(int temp){
    vector<int> ans;
    while(temp > 0){
        int s = temp%10;
        ans.push_back(s);
        temp /= 10;
    }
    return ans;
}

int main(){
    int y;
    cin >> y;
    while(true){
        y = y + 1;
        vector<int> newArr = arr(y);
        bool flag = false;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                if(newArr[i] == newArr[j]){
                    flag = true;
                    break;
                }
            }
            if(flag){
                break;
            }
        }
        if(flag == false){
            for(int i=3; i>=0; i--){
                cout << newArr[i];
            }
            cout<<endl;
            return 0;
        }
    }
    return 0;
}
