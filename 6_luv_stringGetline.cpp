#include<bits/stdc++.h>
using namespace std;

int main(){

	// string str1,str2;
	// cin>>str1>>str2;

	// cout<<str1<<str2<<endl;


	// int t;
	// cin>>t;
	// cin.ignore(); // it ignores the new line
	// while(t--){
	// 	string s;
	// 	getline(cin,s); // reads newline and spaces
	// 	cout<<s<<endl;
	// }

	// reverse string
	string s = "ABHISHEK";
	string ns;
	for(int i=s.size()-1;i>=0;i--){
		ns.push_back(s[i]);
	}
	cout<<ns<<endl;
	return 0;
}