#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    // prime or not
    // n is not prime it means it has two factors in pair
    // n/a = b and a<=sqrt(n)<=b
    int n=5;
    cout<<isprime(n);
    return 0;
}