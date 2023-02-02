#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		int cardV[n];
		for(int i=0;i<n;++i){
			cin>>cardV[i];
		}
		cin>>m;
		int suffle[m];
		long long sum =0;
		for(int i=0;i<m;++i){
			cin>>suffle[i];
			sum+=suffle[i];
		}
		int index = sum%n;
		cout<<cardV[index]<<"\n";
	}

	return 0;
}