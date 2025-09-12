#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
long long n ;
cin>> n ; 

long long temp = n ;
long long ans = 0 ;

ans += n/5 ;
ans += n/25 ;
ans += n/125 ;
ans += n/625 ;
ans += n/3125 ;
ans += n/15625 ;
ans += n/78125 ;
ans += n/390625 ;
ans += n/1953125 ;
ans += n/9765625 ;
ans += n/48828125 ;
ans += n/244140625 ;
cout << ans << endl ;
return  0 ;
}
