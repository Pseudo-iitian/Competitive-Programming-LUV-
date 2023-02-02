#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	int forest[n+1][n+1];
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
			cout<<forest[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}