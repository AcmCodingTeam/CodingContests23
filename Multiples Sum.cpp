/*Link:https://www.hackerrank.com/contests/junior-challenge-1/challenges/multiples-sum*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll n){
    ll n3=n/3;
    ll n5=n/5;
    ll n15=n/15;
    ll l3=n3*3;
    ll l5=n5*5;
    ll l15=n15*15;
    ll s3=(n3*(3+l3))/2;
    ll s5=(n5*(5+l5))/2;
    ll s15=(n15*(15+l15))/2;
    return s3+s5-s15;
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
        n=n-1;
        cout<<fun(n)<<"\n";
        
    }
}