#include<bits/stdc++.h>
using namespace std;
int main(){
    // find the nearest power of 2 >=n
    int n;
    cin>>n;
    int po = ceil(log2(n));
    int op = log2(n); // least power of 2<=n
    int num = 1<<po;
    cout<<num;
    return 0;
}