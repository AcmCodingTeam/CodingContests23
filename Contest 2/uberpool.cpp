/*
link:https://www.hackerrank.com/contests/junior-challenge2/challenges/uber-pool
    pseudo code:
    Constraints:
        3<=N<=10^7
        1<=Q<=2*10^5
        1<=start_x<=end_x<=N
        0<=cost<=10^9
    Example:
    5 3
    1 2 100
    2 5 100
    3 4 100
    take array size of 6.
    arr[6]={0,0,0,0,0,0};
    /*now remember only index from 1 to 2 must be increased */
    instead of increasing every thing at a time we increase a[1]+=100 and decrease a[3]-=100
    arr[6]={0,100,0,-100,0,0};
    similarly
    arr[2]+=100 arr[5+1] is more than MAX size so neglect it;
    arr[6]={0,100,100,-100,0,0};
    arr[3]+=100 arr[4+1]-=100
    arr[6]={0,100,100,0,0,-100};
    arr[i]=arr[i-1]+arr[i] PREFIX SUM
    arr[6]={0,100,200,200,200,100};

    REMBEMBER size here is more than i.e N is greater than 10^6 so use vector(dynamic allocation)

*/
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
