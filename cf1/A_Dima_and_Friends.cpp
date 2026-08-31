#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        count += x;
    }
    int way = 0;
    for(int i=1; i<=5; i++){
        if((count + i)%(n+1) != 1){
            way++;
        }
    }
    cout << way << endl;
    return 0;
}