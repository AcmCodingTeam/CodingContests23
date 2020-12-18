/*Link:https://www.hackerrank.com/contests/junior-challenge-1/challenges/equal-sum-2-2/problem*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(ll arr[],ll n){
    ll prefix_left=0;
    for(ll i=0;i<n;i++){
        prefix_left+=arr[i];
    }
    ll suffix_right=0;
    for(ll i=n-1;i>=0;i--){
        suffix_right+=arr[i];
        /*check prefix_left and suffix_right are equal or not */
        if(suffix_right==prefix_left)
            return true;
        prefix_left-=arr[i];
    }
    return false;
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
        ll arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        if(check(arr,n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}