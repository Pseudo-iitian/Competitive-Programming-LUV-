#include<bits/stdc++.h>
using namespace std;

int main(){

	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		int sum,ans[n];
		for(int j=0;j<n;j++){
			cin>>ans[i];
		}

		int count=0;
		sum=accumulate(ans,ans+n,0);
		while(sum%2!=0){
			sum = accumulate(ans,ans+n,0);
			int index = -1;
			int min = INT_MAX;
			for(int j=0;j<n;j++){
				if(min>ans[j]){
					min=ans[j];
					index = j;
				}
			}
			ans[index]/=2;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}