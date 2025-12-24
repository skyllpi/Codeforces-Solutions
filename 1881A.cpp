#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    string x, s;
	    cin>>x>>s;
	    
	    if(x.find(s) != string::npos){
	        cout<<0<<endl;
	        continue;
	    }
	    bool found = false;
	    
	    for(int counter =1;counter<=6;counter++){
	        x = x+x;
	        if(x.find(s) != string::npos){
	            cout<<counter<<endl;
	            found = true;
	            break;
	        }
	    }
	    if(!found){
	        cout<<-1<<endl;
	    }
    }
    return 0;
}
