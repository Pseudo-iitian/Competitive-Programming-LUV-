#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// mergin two sorted array
	int a[4]={1,4,5,9};
	int b[4]={2,3,6};
	int res[8];
	int i=0,j=0;
	while(i<4 || j<4){
		if(a[i]<b[j]){
			cout<<a[i]<<" ";
			i++;
		}
		else{
			cout<<b[i]<<" ";
			j++;
		}
	}
	for(int i=0;i<8;++i){
		cout<<res[i]<<" ";
	}
	return 0;
}
