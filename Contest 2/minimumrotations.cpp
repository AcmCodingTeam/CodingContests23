#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int n,int k){
    if(k==n){
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    }
    else{
        for(int i=k;i<n;i++){
            cout<<a[i]<<" ";
        }
        for(int i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    solve(a,n,k);
    return 0;
}
