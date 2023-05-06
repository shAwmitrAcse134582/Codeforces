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
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    ll c=0;
    ll mx=0;
    
    for(int i=0;i<n;i++){
        // if(a[i]==0 && a[i+1]==0){
        //     c++;
        // }
        if(a[i]==0){
            c++;
        }
        else{
            c=0;
        }
      mx=max(c,mx);
        
    }
    
    cout<<mx<<endl;
}
get_out;
}