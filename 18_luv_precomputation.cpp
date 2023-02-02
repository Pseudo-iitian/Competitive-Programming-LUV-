#include <bits/stdc++.h>
using namespace std;

/* given T number of test cases and in each test case a number n.
print its factorial for each test case % M
where M = 1e9 + 7 
Constraints: 
1 <=T<=1e5
1<=n<=1e5
*/
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];

int main(){
	const int M = 1e9+7;
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++){
		fact[i]=fact[i-1]*i;
	}
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<fact[n]<<"\n";
	}
	return 0;
}