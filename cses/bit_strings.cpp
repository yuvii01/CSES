#include <bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7 ;
void fn(int n , long long &ans){
    if(n == 0){
        return  ;
    }
    ans *= 2 ;
    ans %= mod ;
    fn(n-1 , ans) ;
}
int main() {
	// your code goes here
    long long  n ;
    cin>> n ;
    long long ans = 1 ;
    fn(n , ans) ;
    cout << ans << endl ;
    return 0 ;
}
