#include <bits/stdc++.h>
using namespace std;

int main(){

	// int n,sum=0;
	// // cout<<"Enter the number of toffees : ";
	// cin>>n;
	// int a[n];
	// // enter the tofees price
	// for(int i=0;i<n;i++){
	// 	cin>>a[i];
	// }
	// // total price of tofees
	// for(int i=0;i<n;i++){
	// 	sum+=a[i];
	// }
	// cout<<sum;

	// take input of 2d array in c++
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}

	return 0;
}