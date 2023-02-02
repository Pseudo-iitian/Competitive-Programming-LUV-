#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<int> arr;
		int ans[n];
		for(int i=0;i<n-1;i++){
			int a;
			cin>>a;
			arr.push_back(a);
		}
		ans[0]=0;
		for(int i=0;i<n-1;i++){
			if(arr[i]==0){
				ans[i+1]=ans[i];
			}
			else if(arr[i]==1){
				ans[i+1]=ans[i]+1;
			}
			else{
				ans[i+1]=ans[i]-1;
			}
		}
		int mn = 1- (*min_element(ans,ans+n));
		ans[0]=mn;
		for(int i=0;i<n-1;i++){
			if(arr[i]==0){
				ans[i+1]=ans[i];
			}
			else if(arr[i]==1){
				ans[i+1]=ans[i]+1;
			}
			else{
				ans[i+1]=ans[i]-1;
			}
		}
		for(auto &val:ans){
			cout<<val<<" ";
		}
		cout<<endl;
	}
	return 0;
}
