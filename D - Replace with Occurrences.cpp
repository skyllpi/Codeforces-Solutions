#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    vector<int> freq(n+1, 0);
    for (int i=0; i<n; i++) {
        cin >> b[i];
        if (b[i] <= n) {
            freq[b[i]]++;
        }
    }

    for (int k=1; k<=n; k++) {
        if (freq[k] % k != 0) {
            cout << -1 << endl;
            return;
        }
    }

    vector<int> start(n+1, 0);
    int cur = 1;
    for (int k=1; k<=n; k++) {
        if (freq[k] > 0) {
            start[k] = cur;
            cur += freq[k] / k;
        }
    }

    vector<int> count(n+1, 0);
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        int k = b[i];
        int g = count[k] / k;
        a[i] = start[k] + g;
        count[k]++;
    }

    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}