#include <iostream> 
#include <string>
#include <cctype> 
using namespace std;

int main(){
    string word;
    cin >> word;
    int upper_count = 0;
    int lower_count = 0;
    for (unsigned char ch : word) { // Iterate through each character in the string
        if (isupper(ch)) {
            upper_count++;
        } else if (islower(ch)) {
            lower_count++;
        }
    }
    if(upper_count > lower_count){
        for (auto& x : word) {
            // Cast to unsigned char for safety
            x = static_cast<char>(toupper(static_cast<unsigned char>(x)));
        }
        cout << word << endl;
    }else{
        for (auto& x : word) {
            // Cast to unsigned char for safety
            x = static_cast<char>(tolower(static_cast<unsigned char>(x)));
        }
        cout << word << endl;
    }
    return 0;
}
