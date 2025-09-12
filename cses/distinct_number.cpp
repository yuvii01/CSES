#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n ;
    cin >> n ;
    set<int> st ;
    while(n--){
        int i ;
        cin >> i ;
        st.insert(i);
    }
    cout << st.size() << endl ;
    return 0 ;
}
