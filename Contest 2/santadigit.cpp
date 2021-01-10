/*
link:https://www.hackerrank.com/contests/junior-challenge2/challenges/santa-digit/problem
    pseudo code:
    constriants:
    1<=N<10^100000 (10^5+1) digits
    1<=K<=10^5
   ll digit_sum(ll n){
            if(l<=9)
                return l;
            /*code on  sum of digits */
            digit_sum(l);   
    }
    main(){
        as N is grater than 10^18 it will not fit into long long datatype so take string
        find sum of it 
         string s;   
         s[i]-'0'   
         ascii value of present character-ascii value of 0
         ascii of 0 is 48.
         if present character value may be from (0-9) i.e(48-57)    
         call digit_sum function   
    }    

*/

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
