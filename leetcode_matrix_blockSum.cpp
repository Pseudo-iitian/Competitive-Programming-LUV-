#include <bits/stdc++.h>
using namespace std;

int pref[105][105];

int main(){
	int m,n;
	cin>>m>>n;
	int nums[m][n];
	int ans[m+1][n+1];
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
        	cin>>nums[i][j];
        }
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            pref[i][j]=nums[i][j]+pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1];
        }
    }
    int k;
    cin>>k;
    // for(int i=1;i<=m;++i){
    //     for(int j=1;j<=n;++j){
    //     	cout<<pref[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int a,b,c,d;
    for(int i=1;i<=m;++i){
    	for(int j=1;j<=n;++j){
		    a=i-k;
		    b=j-k;
		    c=i+k;
		    d=j+k;
		    if(a==0) a++;
		    if(b==0) b++;
		    if(c==4) c--;
		    if(d==4) d--;
		    ans[i][j] = pref[c][d]-pref[c][b-1]-pref[a-1][d]+pref[a-1][b-1];
    	}
    }
    for(int i=1;i<=m;++i){
    	for(int j=1;j<=n;++j){
    		cout<<ans[i][j]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}