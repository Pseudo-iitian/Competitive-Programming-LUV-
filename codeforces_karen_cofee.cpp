#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
int pref[N];
int newpref[N];
int main(){
	int n,k,q;
	cin>>n>>k>>q;
	int left = INT_MAX,right=INT_MIN;
	for(int i=0;i<n;++i){
		int a,b;
		cin>>a>>b;
		pref[a]+=1;
		pref[b+1]-=1;
	}
	for(int i=1;i<N;++i){
		pref[i]+=pref[i-1];
		if(pref[i]>=k) newpref[i]=1;
		newpref[i]+=newpref[i-1];
	}
	while(q--){
		int a,b,count=0;
		cin>>a>>b;
		cout<<newpref[b]-newpref[a-1]<<"\n";
	}
	return 0;
}