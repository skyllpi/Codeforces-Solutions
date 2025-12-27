#include <bits/stdc++.h>

using namespace std;

void solve() {
    string r;
    cin >> r;
    int n = r.length();

    for (char c : r) {
        assert(c == 's' || c == 'u');
    }

    int total_u = 0;
    for (char c : r) {
        if (c == 'u') total_u++;
    }


    int prev2 = 0;
    int prev1 = 0; 

    for (int i = 1; i < n - 1; ++i) {
        int current_val = 0;
        if (r[i] == 'u') {
            current_val = max(prev1, 1 + prev2);
        } else {
            current_val = prev1;
        }
        
        prev2 = prev1;
        prev1 = current_val;
    }

    cout << total_u - prev1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}