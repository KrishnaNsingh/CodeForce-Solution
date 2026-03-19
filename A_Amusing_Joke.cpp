#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string name1 , name2 , mix;
    cin >> name1 >> name2 >> mix;
    
    string combin = name1 + name2;
    sort(mix.begin(), mix.end());
    sort(combin.begin(), combin.end());
    if(mix == combin){
        cout << "YES" << endl;
        return 0;
    }else{
        cout << "NO" << endl;
        return 0;
    }
}