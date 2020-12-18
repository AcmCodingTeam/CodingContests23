/*Link:https://www.hackerrank.com/contests/junior-challenge-1/challenges/fact0rial*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll n){
    ll i=5;
    ll cnt=0;
    /*Every power of 5 add extra Zero */
    while(i<=n){
        cnt+=n/i;
        i*=5;
    }
    return cnt;
}
int main(){
    /*Next 3 lines are to avoid TLE even if your code optimised.Basically fast input*/
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<fun(n)<<"\n";
    }
}