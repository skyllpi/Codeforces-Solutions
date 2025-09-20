#include <bits/stdc++.h>
using namespace std;

long long solve(int k, long long x) {
    if (k == 0) {
        return x;
    }
    
    return solve(k - 1, 2 * x);
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k, x;
	    cin>>k>>x;
	    cout << solve(k, x) << endl;
	}

}
