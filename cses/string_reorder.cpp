#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string s ;
    cin >> s ;
    priority_queue< pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>>>  pq ;
    vector<int> hash(26, 0) ;
    for(auto &i :s){
        hash[i-'A']++ ;
    }
    for(int i = 0 ; i < 26 ; ++i){
        if(hash[i] > 0){
            pq.push({i , hash[i]}) ;
        }
    }
    string res ="" ;
    char curr = 'a' ;
    while(!pq.empty()){
        auto val = pq.top() ;
        pq.pop() ;
        char v = 'A' + val.first  ;
        if(curr == v){
            if(pq.empty()){
                break ;
            }
            auto val2 = pq.top() ;
            char c = 'A' + val2.first ;
            res.push_back(c) ;
            int sec = val2.second -1 ;
            if(sec > 0){
                pq.push({val2.first , sec}) ;
            }
            pq.push(val) ;
        }
        else{
            char c = 'A' + val.first ;
            curr = c ;
            res.push_back(c) ;
            int sec = val.second -1 ;
            if(sec > 0){
                pq.push({val.first , sec}) ;
            }
        }
    }
    if(res.size() != s.size()){
        cout << -1 << endl ;
    }
    else{
        cout << res << endl ;
    }
    return 0 ;
}
