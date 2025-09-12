#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    int n ;
    cin >>  n ;
    int res = n ;
    vector<int> arr ;
    --n ;
    while(n--){
        int a ;
        cin >> a ;
        arr.push_back(a) ;
    }
    sort(arr.begin() , arr.end()) ;
    bool z = true ;
    for(int i = 0 ; i < arr.size() ; ++i){
        if(arr[i] != i+1){
            cout << i+1 << endl ;
            z = false ;
            break ;
        }
    }
    if(z){
        cout << res << endl ;
    }
    return 0;
}