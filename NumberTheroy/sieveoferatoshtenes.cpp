#include<bits/stdc++.h>
using namespace std;

const int n=1e6 + 10;
bool prime[n+1]; // 1 base indexing

void seive(int n){
    fill(prime,prime+n+1,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<=sqrt(n);++i){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
}
int main(){
    // O(nloglog(n))
    seive(n);
    cout<<prime[23];

    return 0;
}