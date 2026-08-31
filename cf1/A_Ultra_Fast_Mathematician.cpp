#include <iostream>
using namespace std;

int main(){
    string num1;
    string num2;
    cin >> num1;
    cin >> num2;
    string ans;
    int n = num1.size();
    for(int i=0; i<n; i++){
        if(num1[i] != num2[i]){
            ans.push_back('1');
        }else ans.push_back('0');
    }
    cout << ans << endl;
    return 0;
}