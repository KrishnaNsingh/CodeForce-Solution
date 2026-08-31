#include <iostream>
using namespace std;

int main(){
    string Newword;
    cin >> Newword;
    Newword[0] = toupper(Newword[0]);
    cout << Newword;
    return 0;
}