#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int testCases;
    cin >> testCases;
 
    while (testCases--) {
        int n;
        cin >> n;
 
        vector<int> result(n);
        for (int idx = 0; idx < n; ++idx) {
            bool isOddPosition = (idx % 2 == 0); 
            if (isOddPosition) {
                result[idx] = -1;
            } else {
                
                if (idx == n - 1) {
                    result[idx] = 2;
                } else {
                    result[idx] = 3;
                }
            }
        }
 
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << ' ';
            cout << result[i];
        }
        cout << '\n';
    }
 
    return 0;
}