#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i =0;i<n;i++){
	        cin>>arr[i];
	    }
	    
        set<int> s;
        bool dupli = false;
        for (int i = 0; i < n; i++) {
            if (s.count(arr[i])) {
                dupli = true;
                break;
            }
            s.insert(arr[i]);
        }
        
        if (dupli) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
	}
}
