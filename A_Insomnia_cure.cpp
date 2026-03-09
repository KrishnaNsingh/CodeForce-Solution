#include <iostream> 
using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int damaged_dragons = 0;
    for(int i=1; i<=d; i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            damaged_dragons++;
        }
    }
    cout << damaged_dragons << endl;
    return 0;
}