#include <bits/stdc++.h>
using namespace std;


//set m se sold tickets remove krdo 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    multiset<long long> tickets;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x; 
        tickets.insert(x);
    }
    
    for (int i = 0; i < m; i++) {
        long long t;
        cin >> t;
        auto it = tickets.upper_bound(t); // first element > t
        if (it == tickets.begin()) {
            cout << -1 << "\n"; // no ticket <= t
        } else {
            --it; // largest ticket <= t
            cout << *it << "\n";
            tickets.erase(it); // remove sold ticket
        }
    }
    
    return 0;
}
