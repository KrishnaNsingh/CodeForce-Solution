#include <iostream>
using namespace std;

int main(){
    int numFriend ; 
    cin >> numFriend;
    int hightFence;
    cin >> hightFence;
    int roadWidth = 0; 

    for(int i=0; i<numFriend; i++){
        int presonHight;
        cin >> presonHight;
        if(presonHight > hightFence){
            roadWidth += 2;
        }else roadWidth += 1;
    }
    cout << roadWidth ; 
}