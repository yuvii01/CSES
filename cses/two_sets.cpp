#include <bits/stdc++.h>
using namespace std;

int main() {
long long n ; cin >> n ;
long long sum = 0 ;
for(long long i = 1 ; i <= n ; ++i){
    sum += i ;
}
if(sum%2 == 1){
    cout << "NO" << endl ;
}
else{
    vector<int> arr ;
    long long sum2 = sum/2 ;
    vector<bool> hash(n+1 , false) ; 
    long long  curr = 0 ;
    long long cnt = 0 ;
    for(long long i = n ; i >= 1 ; --i) {
        if((curr + i) <= sum2){
            curr += i ;
            ++cnt ;
            hash[i] = true ;
        }
    }
    
        cout << "YES" << endl ;
        cout << cnt << endl ;
        
        for(long long i = 1; i <= n; ++i) {
            if(hash[i]) cout << i << " ";
        }
    
    cout << endl ;
        cout << n - cnt << endl ;
        for(long long i = 1; i <= n; ++i) {
            if(!hash[i]) cout << i << " ";
        }
}
return 0 ;
}
