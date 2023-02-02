#include <bits/stdc++.h>
using namespace std;

/*
Given 2d array a of N*N integers. Given Q
queries and in each query given a,b,c,d 
print sum of sqaure represented by (a,b) as top left 
point and (c,d) as top bottom right point

Constraints
1<=N<=1e3
1<=a[i][j]<=1e9
1<=Q<=1e5
1<=a,b,c,d<=N

*/

const int N=1e3+10;
int ar[N][N];
int pref[N][N];

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;++j){
			cin>>ar[i][j];
			pref[i][j]=ar[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		// long long sum=0;
		// for(int i=a;i<=c;++i){
		// 	for(int j=b;j<=d;++j){
		// 		sum+=ar[i][j];
		// 	}
		// }
		// cout<<sum<<endl;
		cout<<pref[c][d]-pref[c][b-1]-pref[a-1][b-1]-pref[a-1][d]<<endl;
	}
	return 0;
}