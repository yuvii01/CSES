#include <bits/stdc++.h>
using namespace std;

set<string> arr ;
void fn(int i  , string &s , vector<bool> &vis , string temp){
    if(temp.length() == s.length()){
        arr.insert(temp) ;
        return;
    }
    
    for(int j = 0 ; j < s.length() ; ++j){
        if(!vis[j]){
            vis[j] = true ;
            temp.push_back(s[j]) ;
            fn(j+1 , s, vis , temp) ;
            temp.pop_back() ;
            vis[j] = false ;
        }
    }
}
long long fact(int n){
    long long ans = 1 ;
    while(n > 0){
        ans *= n ;
        --n ;
    }
    return ans ;
}

int main() {
	// your code goes here
	string n ; 
	cin >>n ;
	vector<bool> vis(n.length() , false) ;
	string temp = "" ;
    fn(0 , n , vis , temp) ;
    
    vector<int> hash(26 , 0) ;
    for(auto &i : n){
        hash[i - 'a']++ ;
    }
    
  
    cout << arr.size() << endl ;
    for(auto &i : arr){
        cout << i << endl ;
    }
return 0 ;
}
