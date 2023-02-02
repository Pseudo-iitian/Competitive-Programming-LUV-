#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1]={0};
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		int flag;
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				for(int k=j+1;k<=n;++k){
					flag=0;
					if((a[i]+a[j]+a[k])%2){
						flag=1;
						cout<<"YES"<<endl;
						cout<<i<<" "<<j<<" "<<k<<endl;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) break;
		}
		if(flag==0) cout<<"NO"<<endl;
	}
	return 0;
}