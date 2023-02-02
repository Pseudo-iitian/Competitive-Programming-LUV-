#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1, 4, 5, 7};
    int b[]={10, 20, 30, 40};
    // int x=32;
    int x=50;
    // find closest pair from two sorted array
    // a[i]+a[j]-x -> min value 
    // 31-32 = 1 min value
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);
    int l=0,r=m-1;
    int diff = INT_MAX,p,q;
    while(l<n && r>=0){
        int mnsum=abs(a[l]+b[r]-x);
        if(diff>mnsum){
            p=l;
            q=r;
            diff=mnsum;
        }
        if((a[l]+b[r])>x) r--;
        else l++;
    }
    cout<<"The closest pair is "<<a[p]<<" and "<<b[q];
    return 0;
}