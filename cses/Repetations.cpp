#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    string n ;
    cin >>  n ;
    int cnt = 0 ;
    int maxcnt = 0 ;
    char temp = n[0] ;
    for(int i = 0 ; i < n.length() ; ++i){
        if(temp == n[i]){
            ++cnt ;
        }
        else{
            cnt = 1 ;
            temp = n[i] ;
        }
        maxcnt = max(maxcnt , cnt ) ;
    }
    cout << maxcnt << endl ;
    return 0;
}