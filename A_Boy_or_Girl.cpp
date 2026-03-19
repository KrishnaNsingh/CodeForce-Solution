#include <iostream>
#include <vector>
using namespace std;

int main(){
    string name;
    cin >> name;
    int num = name.size();
    vector<char> letter;
    letter.push_back(name[0]);
    for(int i=1; i<num; i++){
        bool flag = false;
        for(char x : letter){
            if(x == name[i]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            letter.push_back(name[i]);
        }
    }
    int leng = letter.size();
    if(leng%2 == 0){
        cout << "CHAT WITH HER!" << endl;
        return 0;
    }else{
        cout << "IGNORE HIM!" << endl;
        return 0;
    }
}