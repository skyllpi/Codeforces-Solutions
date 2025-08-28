#include <bits/stdc++.h>
using namespace std;

bool check(int x,int y){
    if(x> 2*(y+1) || y > 2*(x+1)){
        return false;
    }
    else{
        return true;
    }
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int d_r = c-a;
	    int d_k = d-b;
	    if (!check(a, b) || !check(d_r, d_k)) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
	    
	}
}
