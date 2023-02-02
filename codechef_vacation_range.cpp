#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int forest[n+10][m+10];
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin>>forest[i][j];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			forest[i][j]=forest[i][j]+forest[i-1][j]+forest[i][j-1]-forest[i-1][j-1];
		}
	}
	int q;
	cin>>q;
	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int sum = forest[c][d]-forest[c][b-1]-forest[a-1][d]+forest[a-1][b-1];
		int area = (c-a+1)*(d-b+1);
		if(sum==area) cout<<1<<endl;
		else cout<<0<<endl;
	}
	return 0;
}