#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
    int num;
    cin >> num;
    vector<string> nums;
    for(int i=0; i<num; i++){
        string n;
        cin >> n;
        int temp = n.size();
        unordered_set<char> unique_digits;

        for (char c : n) {
            if (isdigit(c)) {
                unique_digits.insert(c);
            }
        }
        string output(unique_digits.begin(), unique_digits.end());
        if(temp/2 > output.size()){
            cout << (output.size()-1) * 2 << endl;
        }
        else cout << output.size()-1 << endl;
    }
    return 0;
}