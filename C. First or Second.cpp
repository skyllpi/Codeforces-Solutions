#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<long long> P(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        P[i + 1] = P[i] + a[i];
    }

    long long suff_max = -INF;
    long long current_dp = 0;

    for (int i = n - 1; i >= 0; --i) {
        long long remnant_val = P[i + 1] - P[n];

        long long pick_val = -INF;
        if (suff_max != -INF) {
            pick_val = a[i] + P[i + 1] + suff_max;
        }

        current_dp = max(remnant_val, pick_val);

        suff_max = max(suff_max, current_dp - P[i]);
    }

    cout << current_dp << "\n";
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