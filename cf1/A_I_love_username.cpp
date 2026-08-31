#include <iostream>
using namespace std;

int main(){
    int participation;
    cin >> participation;
    int count = 0;
    if(participation == 1){
        cout << count << endl;
        return 0;
    }
    int score;
    cin >> score;

    int highestNum = score;
    int lowestNum = score;


    for(int i=1; i<participation; i++){
        cin >> score;
        if(score > highestNum){
            count++;
            highestNum = score;
        }
        else if(score < lowestNum){
            count++;
            lowestNum = score;
        }
    }
    cout << count << endl;
    return 0;
}