#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num ; 
    cin >> num;
    int sum = 0;

    int p;
    for(int i = 0; i < num; i++){
        cin >> p;   // take each percentage
        sum += p;
    }
    double ans = (double)sum / num;

    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}