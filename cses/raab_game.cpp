#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin >> t ;
    while(t-- ){
        int n  , a , b ;
        cin >> n >> a >> b ;
        int t1 = a; 
        int t2 = b ;
        int draw = n - a -b ;
        vector<int> player1 ;
        for(int i = 1 ; i <= n ; ++i ){
            player1.push_back(i) ;
        }
        vector<int> player2 ;
        for(int i = 1 ; i <= n ; ++i ){
            player2.push_back(i) ;
        }
        int index = 0 ;
        while(draw-- && index < n){
            ++index ;
        }
        
        while(a > 0 && index < n){
            reverse(player1.begin() + index, player1.end()) ;
            if(index+1 < n){
                reverse(player1.begin() + index+1, player1.end()) ;
            }
            
            --a ;
            ++index ;
        }
        int check1 = 0 ;
        int check2 = 0 ;
        for(int i = 0 ; i < n ; ++i){
            if(player1[i] > player2[i]){
                ++check1 ;
            }
            else if(player2[i] > player1[i]){
                ++check2 ;
            }
        }
        if(check1 == t1 && check2 == t2){
            cout << "YES" << endl ;
            for(auto &i : player1){
                cout << i << " " ;
            }
            cout << endl ;
            for(auto &i : player2){
                cout << i << " " ;
            }
            cout << endl ;
        }
        else{
            cout << "NO" << endl ;
        }
    }
    return 0 ;
}
