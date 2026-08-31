#include <iostream>
#include <vector>  
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<int> hights;
    for(int i=0; i<num; i++){
        int hight;
        cin >> hight;
        hights.push_back(hight);
    }
    int max_pos = 0;
    int min_pos = 0;
    for(int i=0; i<num; i++){
        if(hights[max_pos] < hights[i]){
            max_pos = i;   
        }
        if(hights[min_pos] >= hights[i]){
            min_pos = i;        
        }
    }
    if(max_pos > min_pos){
        cout <<( max_pos + (num-min_pos-1)) -1  << endl;
    }else{
        cout << (max_pos + (num-min_pos)) -1 << endl;
    }
    return 0;
}