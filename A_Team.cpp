#include <iostream>
using namespace std;

int main(){
    int ques;
    cin >> ques;
    int count = 0;
    for(int i=0; i<ques; i++){
        int p, v, t;
        cin >> p >> v >> t;
        if(p+v+t >= 2){
            count++;
        }
    }   
    cout << count << endl;
    return 0;
}