#include <bits/stdc++.h>
using namespace std;

 // kaden's algorithm

int circularSubarraySum(int arr[], int num){
	int currentsum=0;
	int mxsum=arr[0];
	for(int i=0;i<num;++i){
		currentsum=currentsum+arr[i];
		mxsum=max(mxsum,currentsum);
		if(currentsum<0) currentsum=0;
	}
	return mxsum;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	int x = circularSubarraySum(a,n);
	int y =0;
	for(int i=0;i<n;++i){
		y+=a[i];
		a[i]*=-1;
	}
	int z= circularSubarraySum(a,n);
	if(y+z==0) cout<<x;
	else cout<<max(x,y+z);
	return 0;
}