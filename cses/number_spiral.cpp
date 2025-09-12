#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t ;
    cin >> t;
    

    while(t--){
        long long y, x ;
        cin >> y >> x ;
      
        if(x > y){
            if(x%2 == 1){
                cout << x*x -y +1 << endl ;
            }
            else{
                --x ;
                cout << x*x + y << endl ;
            }
        }
        else{
            if(y%2 == 1){
                --y ;
                cout << y*y + x << endl ;
            }
            else{
                cout << y*y + 1-x<< endl ;
            }
        }
    }
    return 0 ;
}
