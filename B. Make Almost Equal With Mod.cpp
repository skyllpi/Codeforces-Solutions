#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int j = 1; j <= 60; j++) {
            long long k = 1LL << j;
            set<long long> st;

            for (long long x : a)
                st.insert(x % k);

            if (st.size() == 2) {
                cout << k << '\n';
                break;
            }
        }
    }

    return 0;
}