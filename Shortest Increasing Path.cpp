#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
    cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;

        if (y > x) {
            cout << 2 << endl;
        } else if (x == y) {
            cout << -1 << endl;
        } else { // x > y
            if (y >= 2 && (x - y) >= 2) {
                cout << 3 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
    return 0;

}
