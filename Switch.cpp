/*Link:https://www.hackerrank.com/contests/junior-challenge-1/challenges/switch-3/problem*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string helper(string a,string b){
    string res="";
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
            res+='1';
        else
            res+='0';
    }
    return res;    
}
int main(){
    /*Next 3 lines are to avoid TLE even if your code optimised.Basically fast input*/
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        string res=helper(a,b);
        cout<<res<<"\n";
     }
}
