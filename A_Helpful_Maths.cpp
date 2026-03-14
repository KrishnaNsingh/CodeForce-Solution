#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string sum;
    cin >> sum;
    unordered_map<char , int> number;
    number['1'] = 0;
    number['2'] = 0;
    number['3'] = 0;
    for(int i=0; i<sum.size(); i++){
    
        if(sum[i] == '1'){
            number['1']++;
        }
        else if(sum[i] == '2'){
            number['2']++;
        }
        else if(sum[i] == '3'){
            number['3']++;
        }
    }
    string ans;
    for(int i=0; i<number['1']; i++){
        string add1 = "1+";
        ans += add1;
    }
    for(int i=0; i<number['2']; i++){
        string add2 = "2+";
        ans += add2;
    }
    for(int i=0; i<number['3']; i++){
        string add3 = "3+";
        ans += add3;
    }
    ans.pop_back();
    cout << ans << endl;
    return 0;
}