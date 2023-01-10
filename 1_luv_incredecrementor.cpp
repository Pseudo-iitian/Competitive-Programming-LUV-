#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={3,4,5,6};
	int i;
	for(i=0;i<4;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	char c = 'a';
	char b = 'b';
	char d = '1';
	cout<<"printing char looks like : "<<c<<" "<<b<<endl;

	// playing char in terms of integer
	cout<<c-b<<endl;
	if(c-b<0){
		cout<<c<<" letter comes first";
	}
	cout<<endl;
	cout<<c-'0'<<endl;
	int res = d-'0';

	int a1 = 1;
	char b1 = a1 + '0';
	cout<<b1<<endl;

	char e;
	cin>>a1>>e; // cin never read space only terminates at space ans enter (\n)
	cout<<e<<a1;
	return 0;
}