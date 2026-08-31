#include <iostream>
using namespace std;

int main(){
    int num ;
    cin>> num;
    int left = 0;
    int right = 0;
    for(int i=0; i<num; i++){
        int l , r;
        cin >> l >> r;
        left += l;
        right += r;
    }
    int count = 0;
    if(left > num/2){
        count += num - left;
    }else{
        count += left;
    }
    if(right > num/2){
        count += num - right;
    }else{
        count += right;
    }
    cout << count << endl;
    return 0;
}