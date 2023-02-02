#include<bits/stdc++.h>
using namespace std;

bool isfound(int a[],int n,int x){
    int i=0,j=n-1;
    while(i<j){
        if((a[i]+a[j])==x){
            return 1;
        }
        else if((a[i]+a[j])>x) j--;
        else i++;
    }
    return 0;
}
int main(){
    /*Two pointers is really an easy and effective technique that is typically used for searching pairs in a sorted array.
Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.*/
    int a[]={10, 20, 35, 50, 75, 80};
    int n=sizeof(a)/sizeof(int);
    int x =70;
    cout<<isfound(a,n,x);
    return 0;
}