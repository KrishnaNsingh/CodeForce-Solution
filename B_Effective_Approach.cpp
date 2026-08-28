#include <iostream> 
#include <vector>
using namespace std;

// This program compares two approaches to counting occurrences of elements in a vector.

int main(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0; i<n; i++){
        int x;
        cin >>x;
        a.push_back(x);
    }

    int b;
    cin >> b;

    long long v = 0;
    long long p = 0;

 
    for(int i=0; i<b; i++){
        int x;
        cin >> x;
        
        
        //Vasya's approach
        for(int j=0; j<n; j++){
            v++;
            if(a[j] == x){
                break;
            }
        }

        // Petya's approach
        for(int j=n-1; j>=0; j--){
            p++;
            if(a[j] == x){
                break;
            }
        }
    }

    vector<long long> ans;
    ans.push_back(v);
    ans.push_back(p);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;

}