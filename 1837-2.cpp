#include<bits/stdc++.h>
#define ll  long long int
#define pii pair<int,int>
#define pb  push_back
#define get_out return 0
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
const int N=1e5+7;
int main()
{
fast;
ll t;
cin>>t;
while(t--){
char ar[11][11];
ll ans=0;
for(ll i=1;i<=10;i++){
    for(ll j=1;j<=10;j++){
        cin>>ar[i][j];
    }
}
for(ll i=1;i<=10;i++){
    for(ll j=1;j<=10;j++){
        if(ar[i][j]=='X'){
            if(i<=5){
                if(j<=5){
                    ll x=min(i,j);
                    ans+=x;
                }
                else{
                    ll x=min(i,11-j);
                    ans+=x;
                }
            }
            else{
                if(j<=5){
                    ll x=min(11-i,j);
                        ans+=x;
                }
                else{
                    ll x=min(11-i,11-j);
                    ans+=x;
                }
            }
            
        }
    }
}
cout<<ans<<endl;
    
}
get_out;
}