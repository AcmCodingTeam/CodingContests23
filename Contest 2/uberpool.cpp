#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n,q;
    cin>>n>>q;
    vector<int>pf(n+1,0);
    while(q--){
        ll a,b,k;
        cin>>a>>b>>k;
        pf[a]+=k;
        if(b+1<=n)
            pf[b+1]-=k;
    }
    ll maxi=0,cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=pf[i];
        maxi=max(maxi,cnt);
    }
    cout<<maxi<<"\n";
}
