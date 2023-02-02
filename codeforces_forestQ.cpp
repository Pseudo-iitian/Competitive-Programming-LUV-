#include <bits/stdc++.h>
using namespace std;

int forest[1001][1001];
int main(){
	int n,q;
	cin>>n>>q;
	// int forest[n+1][n+1];
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			char tree;
			cin>>tree;
			if(tree=='*') forest[i][j]=1;
			else forest[i][j]=0;
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			forest[i][j]=forest[i][j]+forest[i-1][j]+forest[i][j-1]-forest[i-1][j-1];
		}
	}

	while(q--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int num = forest[c][d]-forest[c][b-1]-forest[a-1][d]+forest[a-1][b-1];
		cout<<num<<"\n";
	}
	return 0;
}