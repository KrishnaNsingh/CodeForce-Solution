#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    int value = 0;
    for(int i=0; i<num; i++){
        string x;
        cin >> x;
        for(int j=0; j<x.size(); j++){
            if(x[j]=='+'){
                value++;
                break;
            }
            else if(x[j]=='-'){
                value--;
                break;
            }
        }
    }
    cout << value << endl;
    return 0;
}