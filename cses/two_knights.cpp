#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    vector<int> arr ;
    for(int i = 1 ; i <= n ; ++i){
        long long a =pow(i , 4) - pow(i,2) ;
        a/=2 ;
        long long b = i > 2 ? (i-1)* (i-2) * 4 : 0;
        long long val = a-b ;
        cout << val << endl ;
    }
    return 0 ;
}
