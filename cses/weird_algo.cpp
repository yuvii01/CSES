#include <bits/stdc++.h>
using namespace std;
void fn(long long n){
    
    if(n == 1){
        // cout << n  ;
        // n = 0 ;
        return ;
    }
    else if(n%2 == 0){
        cout << n/2 << " " ;
        return fn(n/2) ;
    }
    else{
        long long val = n*3 + 1 ;
        cout << val << " " ;
        return fn(val) ;
    }
}
int main() {
    // Write C++ code here
    long long n ;
    cin >>  n ;
    cout << n << " " ;
    fn(n) ;
    return 0;
}