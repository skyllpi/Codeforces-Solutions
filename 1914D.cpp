#include <bits/stdc++.h>
using namespace std;

vector<int> findmax(vector<int> &arr){
    vector<pair<int,int>> mp(arr.size());
    for(int i = 0;i<arr.size();i++){
        mp[i].first = arr[i];
        mp[i].second = i;
    }
    sort(mp.rbegin(),mp.rend());
    vector<int> ans(3);
    for(int i =0 ;i<3;i++){
        ans[i] = mp[i].second;
    }
    return ans;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin >> n;
	    vector<int> a(n),b(n),c(n);
	    
	    for(int i =0;i<n;i++)cin>>a[i];
	    for(int i = 0;i<n;i++)cin>>b[i];
	    for(int i = 0;i<n;i++)cin>>c[i];
	    
	    vector<int> maxa = findmax(a);
	    vector<int> maxb = findmax(b);
	    vector<int> maxc = findmax(c);
	    
	    int ans = 0;
	    
	    for(int i =0;i<3;i++){
	        for(int j =0;j<3;j++){
	            for(int k = 0;k<3;k++){
	                int x = maxa[i], y=maxb[j], z = maxc[k];
	                
	                if(x== y or y==z or z==x){
	                    continue;
	                }
	                ans = max(ans,a[x]+b[y]+c[z]);
	            }
	        }
	    }
	    cout<<ans<<endl;
    }

    return 0;
}
