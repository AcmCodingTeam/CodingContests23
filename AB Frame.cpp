/*Link:https://www.hackerrank.com/contests/junior-challenge-1/challenges/hollow-diamond-2 */
#include<bits/stdc++.h>
using namespace std;
int main() {   
    /*Next 3 lines are to avoid TLE even if your code optimised.Basically fast input*/
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case"<<" "<<"#"<<i<<":"<<endl;
        int n,cnt=0;
        /*l denotes count of line and p denotes the line which as b */
        int l=1,p=0;
        cin>>n;
        /* print 2,5,8,..line as b so it is generalised as 3*p+2 */
        /*first print upper part of hollow diamond*/
        for(int i=1;i<=(n/2)+1;i++){
            /*For spaces which are before a or b */
            for(int j=n/2;j>=i;j--)
                cout<<" ";
            if(i==1){
                cout<<"a";
                l+=1;
            }
            else{
                cnt+=1;
                int k=1;
                if(l==3*p+2){
                    cout<<"b";
                }
                else{
                    cout<<"a";
                }
                /*For spaces which are after a or b */
                while(k<=(cnt*2)-1){
                    cout<<" ";
                    k++;
                }
                 if(l==3*p+2){
                    cout<<"b";
                    p+=1; 
                }
                else{
                    cout<<"a";
                }
                l+=1;
            }
            cout<<"\n";
        }
        /*Next print the lower hollow diamond*/
        for(int i=1;i<=n-((n/2)+1);i++){
            for(int j=1;j<=i;j++)
                cout<<" ";
            if(i==n-((n/2)+1)){
                 if(l==3*p+2){
                    cout<<"b";
                    p+=1;
                }
                else{
                    cout<<"a";
                }
                l+=1;
            }
            else{
                cnt-=1;
                int k=1;
                if(l==3*p+2){
                    cout<<"b";
                }
                else{
                    cout<<"a";
                }
                while(k<=(cnt*2)-1){
                    cout<<" ";
                    k++;
                }
                if(l==3*p+2){
                    cout<<"b";
                    p+=1;
                }
                else{
                    cout<<"a";
                }
                l+=1;
            }
            cout<<"\n";
        }    
    }
    return 0;
}