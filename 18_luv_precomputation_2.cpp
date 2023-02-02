#include <bits/stdc++.h>
using namespace std;

/*
Given an array of N integers.Given Q queries and 
each queries given a number X, 
print count of that number in array.

Constraint 
1<=Q,N<=1e5
1<=a[i]<=1e7
*/

// implementing hash function
const int N=1e7+10;
int ct[N]={0,0};

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		ct[a[i]]++;
	}
	int q,x;
	cin>>q;
	while(q--){
		cin>>x;
		cout<<ct[x]<<"\n";
	}

	// O(n) + O(q) = 1e5
	return 0;
} 