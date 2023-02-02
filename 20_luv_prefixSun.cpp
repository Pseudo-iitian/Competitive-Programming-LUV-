#include <bits/stdc++.h>
using namespace std;

/*
Given array a of N integers. Given Q queries and 
in each query given L and R print sum of 
array elements from index L to R (included)

Constraints
1<=N,Q<=1e5
1<=a[i]<=1e9
1<=L,R<=N
1 base indexing
*/

const int N = 1e5 + 10;
int a[N];
int pf[N]={0,0};

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pf[i]=pf[i-1]+a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		long long sum=0;
		// for(int i=l;i<=r;++i){
		// 	sum+=a[i];
		// }
		cout<<pf[r]-pf[l-1]<<endl;
	}

	// O(N) + O(n*Q)-- > O(1e10) - before
	// O(N)+O(q) - O(1e5)
	return 0;
}