#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    string s;
    set<string> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;

        auto it = st.find(s);
        if(it!=st.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        st.insert(s);
    }
    return 0;
}
