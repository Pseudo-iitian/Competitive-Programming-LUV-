#include <bits/stdc++.h>
using namespace std;

void inc(int *x){
	(*x)++;
}
int main(){
	// int x =4;
	// int* ptr=&x;
	// cout<<"add of x: "<<&x<<endl;
	// // cout<"val of ptr: "<<ptr;
	// cout<<"val at ptr :"<<*ptr<<endl;
	// *ptr = 8;
	// cout<<"val at ptr : "<<*ptr<<endl;
	// cout<<"val at ptr : "<<x<<endl;
	// int **p = &ptr;
	// cout<<"val at p is add of x: "<<*p<<endl;
	// cout<<"val of x :"<<**p<<endl;
	// cout<<"add of ptr"


	// int a[10];
	// a[0]=1;
	// a[1]=4;
	// cout<<"a: "<<a<<endl;
	// cout<<"&a: "<<&a<<endl;
	// cout<<"*a: "<<*a<<endl;
	// cout<<"a+1: "<<a+1<<endl;
	// cout<<"&a[1]: "<<&a[1]<<endl;
	// cout<<"*(a+1): "<<*(a+1)<<endl;

	int x=4;
	cout<<x<<endl;
	inc(&x);
	cout<<x<<endl;
	return 0;
}