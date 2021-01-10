#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll superdigit(ll res){
    if(res<=9)
        return res;
    ll sum=0;
    while(res!=0){   
        ll rem=res%10;
        sum+=rem;
        res=res/10;
        
    }
    return superdigit(sum);
}

int main(){
    
    string s;
    int k;
    cin>>s>>k;
    ll res=0;
    ll n=s.size();
    for(int i=0;i<n;i++){
        res+=(s[i]-'0');
    }
    ll ans= superdigit(res*k);
    cout<<ans<<"\n";
    
}
