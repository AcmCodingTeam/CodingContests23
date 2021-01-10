#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int cnt=0,pos=-1;
        while(n>0 && cnt<1){
            if(n&1) cnt++;
            n=n>>1;
            pos++;
        }
        if(n==0) cout<<pos<<"\n";
        else cout<<"-1\n";
    }  
    return 0;
}
