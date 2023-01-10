#include<bits/stdc++.h>
using namespace std;

int main(){

	// precedence of a datatype :
	// char -> int -> long int -> long long int -> float -> double

	// char b ='a';
	// cout<< b + 1;

	// char, int, long int, long long int, flaot, double
	// -10^9 < int < 10^9
	// -10^12 < long int < 10^12
	// -10^18 < long long int < 10^18
	// 1e24 = 10^24

	// we must not use double if not required becuase accuracy khtm ho jaati hai 
	// double c = 1e18;
	// cout<<fixed<<c;
	// output : 981000000000000000000.000000


	// 1<= l <= 10^9
	// 1<= b <= 10^9

	int l,b;
	cin>>l>>b;
	cout<<l* 1ll * b<<endl;  // calculation goes in long long int
	int sum = l*1ll*b; // overflow
	cout<<sum;
	return 0;
}