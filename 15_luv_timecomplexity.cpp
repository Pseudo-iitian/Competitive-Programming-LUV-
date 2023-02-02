#include <bits/stdc++.h>
using namespace std;

int main(){

	// // Time complexity -> total number of iterations
	// int x=4; //1st iteration
	// int sum =0; //2nd
	// sum = x+x; //3rd
	// int n; //4th
	// cin>>n; //5th

	// // O(5)
	// for(int i=0;i<n;i++){
	// 	int y; //1st
	// 	y=5; //2nd
	// 	y++; //3rd
	// 	// O(3)
	// }

	// n - 1e5 
	// O(5) + O(3*n);
	// O(n) -> time complexity


	// estimating the time complexity
	int n = 1e5;
	int ct=0;
	for(int i=0;i<n;i++){
		ct++;
	}
	// O(2) + O(n) -> O(n)

	int n = 1e5;
	int ct=0;
	for(int i=0;i<n;i++){
		for(int i=0;i<n;i++){
			ct++;
		}
	}
	// O(2) + O(n*n) -> O(n*n)-> TLE
	// 1 sec - 1e7 iterations can be performed
	// TC - 1e10 - 1000sec 
	
	return 0;
}