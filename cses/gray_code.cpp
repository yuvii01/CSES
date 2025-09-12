#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
	int n ; 
	cin >>n ;
	
	
vector<string> gray ;
gray.push_back("0");
gray.push_back("1");

for(int i = 2 ; i <= n ; ++i){
  int size = gray.size() ;
  for(int i = size-1 ; i >= 0 ; --i){
      gray.push_back(gray[i]) ;
  }
  for(int i = 0 ; i < size ; ++i){
      gray[i] = "0" + gray[i] ;
      gray[i+size] = "1" + gray[i+size] ;
  }
}


for(auto &i : gray){
    cout << i << endl ;
}
return 0 ;
}
