#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    long long n, k, l, c, d, p, nl, np;  
    cin >> n >>  k >>  l >>  c >>  d >>  p >>  nl >>  np; 
    int toasts = (k*l)/nl;
    int limon = c*d;
    int salt = p/np;
    cout << min({toasts, limon, salt})/n << endl;
    return 0;
}