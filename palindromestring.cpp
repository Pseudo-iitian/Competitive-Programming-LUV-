#include <bits/stdc++.h>
using namespace std;

int main(){

	// palidrome string 
	string s;
	cin>>s;
	int n=s.size();
	int flag;
	for(int i=0;i<s.size();i++){
		flag=1;
		if(s[i]!=s[n-i-1]){
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}


	// if you want to take large number more than 1e18 then 
	// take input in string 
	string str;
	cin>>str;

	n= str.size()-1;
	int num = str[n]-'0';
	cout<<num;

	return 0;
}