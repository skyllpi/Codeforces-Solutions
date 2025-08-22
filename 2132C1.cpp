#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
 
int main() {
    
    vector<ll> p{1}; while (p.back() <= 1000000000LL/3) p.push_back(p.back()*3);
    
    int t; cin >> t;
    while (t--) {
        ll n, ans = 0; cin >> n;
        for (int i = (int)p.size()-1; i >= 0; --i) {
            ll d = n / p[i]; if (!d) continue;
            ll cost_i = p[i]*3 + (i ? (ll)i*(p[i]/3) : 0);
            ans += d * cost_i; n -= d * p[i];
        }
        cout << ans << '\n';
    }
}