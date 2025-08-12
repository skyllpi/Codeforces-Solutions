#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int t;
	cin>>t;
	int counter = 0;
	while(t--){
	    int l1;
	    cin>>l1;
	    vector<int> l2(l1);
	    for(int i =0 ;i<l1;i++){
	        cin>>l2[i];
	    }
	    vector<int> l3(l1);
	    for(int i =0 ;i<l1;i++){
	        cin>>l3[i];
	    }
	    int total_dec = 0;
        int total_inc = 0;
        for (int i = 0; i < l1; i++) {
            if (l2[i] > l3[i]) {
                total_dec += l2[i] - l3[i];
            } else if (l2[i] < l3[i]) {
                total_inc += l3[i] - l2[i];
            }
        }
 
        if (total_dec == 0 && total_inc == 0) {
            cout << 1 << endl;
        } else {
            cout << total_dec + 1 << endl;
        }
	}
	return 0;
}