#include <bits/stdc++.h>
using namespace std;
int main() {
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		vector<vector<int>> ans;
		for(int i=0;i<n;i++){
			vector<int> temp;
			for(int j=0;j<n;j++){
				int a;
				cin>>a;
				temp.push_back(a);
			}
			ans.push_back(temp);
		}
		int flag=1;
		for(int i=0;i<n;i++){
			for(int j=0;j<n/2;j++){
				if(ans[i][j]!=ans[i][n-1-j]){
					flag=0;
					break;
				}
			}
			if(flag==0){
				break;
			}
		}
		
		int flag1=1;
		for(int i=0;i<n/2;i++){
			for(int j=0;j<n;j++){
				if(ans[i][j]!=ans[n-1-i][j]){
					flag1=0;
					break;
				}
			}
			if(flag1==0){
				break;
			}
		}
		flag = flag*flag1;
		if(flag==1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}