#include <bits/stdc++.h>
using namespace std;

int sumOfRowCol(int N, int M, vector<vector<int>> A) {
    // code here
    for(int i=0;i<A.size();i++){
        int Vsum=0;
        int Hsum = accumulate(A[i].begin(),A[i].end(),0);
        for(int j=0;j<A.size();j++){
            Vsum += A[j][i];
        }
        if(Hsum!=Vsum){
            return 0;
        }
    }
    return 1;
    // to be continued...
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> num;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int a;
            cin>>a;
            temp.push_back(a);
        }
        num.push_back(temp);
    }
    cout<<sumOfRowCol(n,m,num);
    return 0;
}