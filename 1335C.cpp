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
    ll n,mx=INT_MIN,c=0;
    cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
         cin>>a[i];
         mp[a[i]]++;
         if(mp[a[i]]==1){
            c++;
         }
         mx=max(mp[a[i]],mx);
    }
    cout<<max(min(c,mx-1),min(c-1,mx))<<endl;
//     sort(a,a+n);
//     ll c=0,d=0;
//     ll mx=INT_MIN;
//     map<ll,ll>mp;

//     if(n==1){
//         cout<<0<<endl;
//     }
//     else{
//       for(ll i=0;i<n;i++){
//     mp[a[i]]++;
       
//     }
    
//     for(auto val:mp){
        
//         mx=max(mx,val.second);
//             if(mx==1){
//                 d++;
//             }
        
//     }
    
//     for(auto val : mp){
//         if(val.second==mx){
//             c++;
//         }
//     }
   
//    cout<<min(mx,d)<<endl; 
// }

}
get_out;
}