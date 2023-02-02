#include <iostream>
using namespace std;

int main() {

	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count=0;
		while(1){
			int flag;
			for(int i=0;i<n;i++){
				flag=0;
				if(a[i]<k){
					flag=1;
					break;
				}
			}
			if(flag==1){
				for(int i=0;i<n;i++){
					a[i]++;
				}
				count++;
			}
			else{
				break;
			}
		}
		cout<<count<<endl;
	}

	return 0;
}