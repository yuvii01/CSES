#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26, 0);
    
    for (char c : s) {
        freq[c - 'A']++; // if uppercase letters, change to 'a' if lowercase
    }
    
    int oddCount = 0, oddCharIndex = -1;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] % 2 == 1) {
            oddCount++;
            oddCharIndex = i;
        }
    }
    
    if ((n % 2 == 0 && oddCount > 0) || oddCount > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
    
    vector<char> arr(n);
    int l = 0, r = n - 1;
    
    // Fill even-count characters from outside inward
    for (int i = 0; i < 26; ++i) {
        while (freq[i] >= 2) {
            arr[l++] = 'A' + i;
            arr[r--] = 'A' + i;
            freq[i] -= 2;
        }
    }
    
    // If there is an odd character, put it in the middle
    if (oddCharIndex != -1) {
        arr[l] = 'A' + oddCharIndex; // middle position
    }
    
    string res(arr.begin(), arr.end());
    cout << res << "\n";
    return 0;
}
