#include<bits/stdc++.h>
using namespace std;

int main(){
    // trial division method
    // O(sqrt(n))
    // observable time complexit - amortise t c
    vector<int> v;
    int n=16;
    for(int i=2;i<=sqrt(n);++i){
        while(n%i==0){
            v.push_back(i);
            n=n/i;
        } // run 1 time only
    }
    if(n>1) v.push_back(n);
    for(auto &val:v){
        cout<<val<<" ";
    }
    return 0;
}