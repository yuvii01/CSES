#include <bits/stdc++.h>
using namespace std;

long long mini = LLONG_MAX ;
void fn(int i , vector<long long> &arr , long long &sum , long long  curr){
    if(i == arr.size()){
        long long val2 = sum - curr ;
        long long  res = abs(val2 - curr) ;
        mini = min(mini , res) ;
        return; 
    }
    fn(i+1 , arr , sum , curr) ;
    fn(i+1 , arr , sum , curr + arr[i]) ;
}
int main() {
	// your code goes here
	int n ; cin>> n ;
	vector<long long> arr(n , 0) ;
	long long sum = 0 ;
	for(auto &i : arr){
	    long long a ;
	    cin >> a ;
	    sum += a;
	    i = a  ;
	}
	fn(0 , arr , sum , 0) ;
	cout << mini << endl ;
	return 0 ;
}
