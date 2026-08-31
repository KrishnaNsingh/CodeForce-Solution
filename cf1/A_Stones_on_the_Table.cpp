#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    string stone;
    cin >> stone;
    int count = 0;
    int maxCount = 0;
    for(int i=0; i<num-1; i++){
        if(stone[i] == stone[i+1]){
            count++;
            if(count >= 1){
                maxCount++;
            }
        }else{
            if(count > 0) count--;
            else continue;
        }
    }
    cout << maxCount << endl;
    return 0;
}