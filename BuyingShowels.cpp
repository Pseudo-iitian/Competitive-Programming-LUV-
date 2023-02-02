#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[k+1]={0,0};
		for(int i=1;i<=k;++i){
			if(n%i==0){
				a[i]=n/i;
			}
			else{
				a[i]=INT_MAX;
			}
		}
		int mn = *min_element(a+1,a+k+1);
		cout<<mn<<"\n";
	}
	return 0;
}