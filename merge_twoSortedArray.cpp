#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	int a[]={1, 3, 5, 7};
	int b[]={2, 4, 6, 8};
	n=sizeof(a)/sizeof(int);
	m=sizeof(b)/sizeof(int);
	int c[n+m];
	int k=0;
	int i=0,j=0;
	// for common part of the array
	while(i<n && j<m){
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else{
			c[k++]=b[j++];
		}
	}
	// for remaining part of the array
	while(i<n){
		c[k++]=a[i++];
	}
	while(j<m){
		c[k++]=b[j++];
	}

	for(int i=0;i<(n+m);++i){
		cout<<c[i]<<" ";
	}
	return 0;
}