#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int costG,costP,n;
		vector<pair<int,int>> ans;
		cin>>costG>>costP;
		cin>>n;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			ans.push_back({a,b});
		}
		int sum=0;
		int total = costG+costP;
		for(int i=0;i<ans.size();i++){
			if(ans[i].first==1){
				int m = min(costG,costP);
				sum = sum + ans[i].first*m + ans[i].second*(total-m);
			}
			else{
				int mx = max(costG,costP);
				sum = sum + ans[i].first*mx + ans[i].second*(total-mx);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}