#include<bits/stdc++.h>
using namespace std;

int digit_sum(int n){
	int digits=0;
	while(n){
		digits += n%10;
		n=n/10;
	}
	return digits;
}
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int a,b;
	// call by reference 
	cin>>a>>b;
	cout<<"Before swap a and b are "<<a<<" and "<<b<<endl;
	swap(a,b);
	cout<<"After a and b are : "<<a<<" and "<<b<<endl;
	return 0;
}