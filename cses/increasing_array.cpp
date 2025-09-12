#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n ;
    cin >>  n ;
    vector<int> arr(n , 0) ;
    for(auto &i : arr) {
        cin >> i ;
    }
    long long maxcnt = 0 ;
    for(int i = 1; i < arr.size() ; ++i){
        if(arr[i] < arr[i-1]){
            maxcnt += abs(arr[i]-arr[i-1]) ;
            arr[i] = arr[i-1] ;
        }
    }
    cout << maxcnt << endl ;
    return 0;
}