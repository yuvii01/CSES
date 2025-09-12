#include<bits/stdc++.h> 
using namespace std ;

int main(){
    int n ;
    int x ;
    cin >> n >> x ;
    vector<int> arr(n) ;
    for(auto &i : arr){
        cin >> i ;
    }
    sort(arr.begin() , arr.end()) ;
    int ans = 0 ;
    int i = 0 ; 
    int j = n-1 ;
    while(i <= j){
        if(arr[i] + arr[j] <= x){
            ++i ;
            --j ;
            ++ans ;
        }
        else{
            --j ;
            ++ans ; 
        }
    }
    cout << ans << endl ; 
    return 0 ;
}