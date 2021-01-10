#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        ll cnt=0;
        for(int i=0;i<n;i++){
            ll k=arr[i];
            while(k>0){
                if((k&1)==0){
                    cnt+=1;
                }
                k=k>>1;
            }
        }
        cout<<cnt<<"\n";
    }

}