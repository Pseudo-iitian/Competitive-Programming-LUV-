#include<bits/stdc++.h>
using namespace std;

int main(){
// https://atcoder.jp/contests/abc281/tasks/abc281_c
	int n;
	long long int t;
	cin>>n>>t;

	long long int songt[n];
	for(int i=0;i<n;i++){
		cin>>songt[i];
	}
	int count=0,res;
	for(int i=0;i<n-1;i++){
		songt[i+1]+=songt[i];
	}

	long int sum;
	for(int i=0;i<n;i++){
		if(songt[i]>t){
			res = abs(songt[i-1]-t);
			sum = (count+1)%(n+1);
			break;
		}
		else if(songt[i]<=t){
			res = abs(songt[i]-t);
			count++;
			sum=(count+1)%n;
		}
	}
	// // count = (count+1)%(n+1);
	for(auto var:songt){
		cout<<var<<" ";
	}
	cout<<endl;
	cout<<sum<<" "<<res<<endl;

	return 0;
}