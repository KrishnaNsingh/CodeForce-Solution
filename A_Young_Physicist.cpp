#include <iostream>
using namespace std;

int main(){
    int numForce;
    cin >> numForce;
    int x = 0;
    int y = 0;
    int z = 0;
    for(int i=0; i<numForce; i++){
        int inX;
        cin >> inX;
        int inY;
        cin >> inY;
        int inZ;
        cin >> inZ;
        x += inX;
        y += inY;
        z += inZ;
    }
    if(x == 0 && y == 0 && z == 0){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
}