#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
	    vector<int> ans;
	    for(int i=0;i<n;i++){
	        int a;
	        cin>>a;
	        ans.push_back(a);
	    }
	    for(int i=0;i<n-1;i++){
	        if(ans[i+1]>ans[i]){
	            ans[i+1]=ans[i];
	        }
	        else{
	            continue;
	        }
	    }
	    unordered_set<int> set;
	    for(int i=0;i<n;i++){
	        set.insert(ans[i]);
	    }
	    cout<<set.size()<<endl;
	}
	return 0;
}
