#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
ll n,x;
cin>>n;
ll a[n];
for(ll i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
ll q;
cin>>q;
// ll b[q];
// ll c=0;
// ll s=0;
// for(ll j=0;j<q;j++){
//     cin>>b[j];
// }
// sort(b,b+q);
// for(ll j=0;j<q;j++){
//     for(ll i=0;i<n;i++){
//         if(b[j]>=a[i]){
//             c++;
//         }   

//     }
   
//    cout<<abs(c-s)<<endl;
//    s=c;
// }
while(q--){
cin>>x;
cout<<upper_bound(a,a+n,x)-a<<endl;
}
//  for(ll j=0;j<q;j++){
//     lower_bound(a[0],a[n-1],j);
//  }

get_out;
}