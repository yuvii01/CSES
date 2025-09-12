#include <bits/stdc++.h>
using namespace std;
 

int main(){
    
int n ;
int m ;
int k ;
cin >> n >> m >> k ; 
vector<int> arr1(n) ;
vector<int> arr2(m) ;
for(auto &i : arr1){
    cin >> i ;
}
for(auto &i : arr2){
    cin >> i ;
}
sort(arr1.begin() , arr1.end()) ;
sort(arr2.begin() , arr2.end()) ;

int i =  0;
int j = 0 ;
int ans = 0 ;
while(i < n && j < m){
    if(arr1[i]-k <= arr2[j] && arr1[i]+k >= arr2[j]  ){
        ans++ ;
        ++i ;
        ++j ;
    }
    else if(arr1[i] < arr2[j]){
        ++i ;
    }
    else{
        ++j ;
    }
}
cout << ans << endl ; 
return 0 ;

}

