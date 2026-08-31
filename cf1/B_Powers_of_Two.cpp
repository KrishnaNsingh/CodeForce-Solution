#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int length ;
    cin >> length;
    vector<int> nums;
    for(int i=0; i<length; i++){
        long long int num;
        cin >> num;
        nums.push_back(num);
    }
    long long int count = 0;
    int n = nums.size();
    for(int i=0; i<n; i++){
        long long int k = nums[i];
        for(int j=i+1; j<n; j++){
            long long int l = nums[j];
            long long int m = k+l;
            if(m > 0){
                while(m%2==0){   
                    m /= 2 ;
                }
                if(m == 1){
                    count++;
                }
            }
            
        }
    }
    cout<< count << endl;
}