#include <iostream>
#include <vector>
#include <string>

using namespace std;

// This function now represents 1 second of time passing in the queue
vector<char> pushOne(vector<char> temp) {
    int n = temp.size();
    // We loop to n-1 because we are checking the person at i and i+1
    for (int i = 0; i < n - 1; i++) {
        // If a Boy is in front of a Girl
        if (temp[i] == 'B' && temp[i+1] == 'G') {
            // Swap them
            temp[i] = 'G';
            temp[i+1] = 'B';
            // Skip the next index so this boy doesn't move twice in 1 second
            i++; 
        }
    }
    return temp;
}

int main() {
    int len, time;
    if (!(cin >> len >> time)) return 0;
    
    string s;
    cin >> s;
    
    vector<char> temp(s.begin(), s.end());

    // Run the simulation for 'time' seconds
    for (int i = 0; i < time; i++) {
        temp = pushOne(temp);
    }

    for (char c : temp) {
        cout << c;
    }
    cout << endl;

    return 0;
}