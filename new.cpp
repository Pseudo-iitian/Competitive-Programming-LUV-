#include<bits/stdc++.h>
using namespace std;

int main(){


	int a[]={1,2,3,4};
	int n=4;

	for(int i=0;i<n-1;i++){

		a[i+1]+=a[i];
	}

	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}


	
	return 0;
}