#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n, k; 
        string s;
        cin >> n >> k >> s;
        int cur = 0; 
        bool bad = false;
        for (char c : s) {
            if (c == '1') {
                if (++cur >= k) { bad = true; break; }
            } else cur = 0;
        }
        if (bad) { cout << "NO\n"; continue; }
        cout << "YES\n";
        vector<int> p(n);
        vector<int> z, o;
        for (int i = 0; i < n; ++i) (s[i]=='0' ? z : o).push_back(i);
        int val = n;
        for (int i : z) p[i] = val--;
        for (int i : o)  p[i] = val--;
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << p[i];
        }
        cout << "\n";
    }
    return 0;
}