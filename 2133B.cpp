#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long> grumpy(n);
	    for(int i =0 ;i<n;i++){
	        cin>>grumpy[i];
	    }
	    sort(grumpy.begin(),grumpy.end());
	    
	    long long max = 0;
	    
	   
	    if(n>=2 && n%2 == 0){
	        for(int i=1;i<n;i=i+2){
	            max += grumpy[i];
	        }
	    }else{
	        for(int i=0;i<n;i=i+2){
	            max += grumpy[i];
	        }
	    }
	    
	    cout<<max<<endl;
    }
}
