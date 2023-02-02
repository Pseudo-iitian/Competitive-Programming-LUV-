#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		map<int,int> m;
		int n;
		cin>>n;
		int h[n];
		for(int i=0;i<n;++i){
			cin>>h[i];
			m[h[i]]++;
		}
		int sum =0;
		for(auto &val:m){
			if(val.first==1){
				int ct = (int)(val.second+1)/2;
				sum+=ct;
			}
		 	else sum+=val.second;
		}
		cout<<sum<<"\n";
	}

	return 0;
}