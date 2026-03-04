#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    for(int i=2; i<(m/2)+1; i++){
        if(m%i==0){
            cout << "NO" << endl;
            return 0;
        }
    }
    for(int i=n+1; i<m; i++){
        bool flag = false;
        for(int j=2; j<(i/2)+1; j++){
            if(i%j==0){
                flag = true;
                break;
            }
        }
        if(flag == false){
            if(i < m){
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}