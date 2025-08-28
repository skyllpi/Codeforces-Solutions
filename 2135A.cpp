#include <bits/stdc++.h>
using namespace std;

struct Seg {
    int l, r, w;
    bool operator<(const Seg& o) const {
        if (r != o.r) return r < o.r;
        return l < o.l;
    }
};

int main() {
    
    
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<vector<int>> pos(n + 1);
        for (int i = 0; i < n; ++i) pos[a[i]].push_back(i);

        vector<Seg> se;
        se.reserve(n);
        for (int v = 1; v <= n; ++v) {
            const auto& p = pos[v];
            int c = (int)p.size();
            for (int t = v; t <= c; ++t) {
                se.push_back({p[t - v], p[t - 1], v});
            }
        }

        if (se.empty()) { cout << 0 << "\n"; continue; }

        sort(se.begin(), se.end());
        int m = (int)se.size();
        vector<int> ends(m), starts(m), w(m);
        for (int i = 0; i < m; ++i) {
            starts[i] = se[i].l;
            ends[i]   = se[i].r;
            w[i]      = se[i].w;
        }

        vector<int> dp(m + 1, 0);
        for (int i = 1; i <= m; ++i) {
            int l = starts[i - 1];
            int j = int(lower_bound(ends.begin(), ends.end(), l) - ends.begin());
            dp[i] = max(dp[i - 1], dp[j] + w[i - 1]);
        }

        cout << dp[m] << "\n";
    }
    return 0;
}