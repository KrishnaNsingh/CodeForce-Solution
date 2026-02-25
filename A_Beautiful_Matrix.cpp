#include <iostream>
using namespace std;

int main(){
    int x;
    int y;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            int nums;
            cin >> nums;
            if(nums == 1){
                x = i - 3;
                y = j - 3;
            }
        }
    }
    if(x < 0 ){
        x = -x; 
    }
    if(y < 0){
        y = -y;
    }
    cout << x + y; 
    return 0;
}