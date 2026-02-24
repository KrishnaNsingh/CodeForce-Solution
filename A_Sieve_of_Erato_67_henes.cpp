#include <iostream>
#include <vector>
using namespace std; 

int main(){
    int integer; 
    cin >> integer;

    for(int i=0; i<integer; i++){
        int Testcase; 
        cin >> Testcase;
        vector<int> ans; 
        for(int j=0; j<Testcase; j++){
            int value; 
            cin >> value;
            if( value == 67){
                ans.push_back(value);
            }
        }
        if(ans.size() >= 1){
            cout << "YES" << endl ;
        }else cout << "NO" << endl ;
    }
    return 0;
}