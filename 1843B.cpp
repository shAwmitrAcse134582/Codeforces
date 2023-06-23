#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll t;
cin>>t;
while(t--)
{
    ll n;
    cin>>n;
    ll a[n];
    ll s=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s+=abs(a[i]);
    }
    ll c=0;
    bool ok=false;

    for(ll i=0;i<n;i++){
         if(a[i]<0){
            if(ok==false){
                c++;
                ok=true;
            }
         } 
         else if(a[i]>0){
            ok=false;
         }
    }
    cout<<s<<" "<<c<<endl;
    

}
get_out;
}