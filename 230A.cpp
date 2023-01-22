#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 ll n,k;
 cin>>n>>k;
pair<ll,ll>a[k];
 for(ll i=0;i<k;i++)
 {
 	cin>>a[i].first>>a[i].second;
 
 }
 	sort(a,a+k);
 
 for(ll i=0;i<k;i++){
 	if(n>a[i].first){
 		n+=a[i].second;
 		
 	}
 	else{
 		cout<<"NO"<<endl;
 		return 0;
 	}
 }
 cout<<"YES"<<endl;
 
 // for(ll i=0;i<k;i++)
 // {
 	// ll x,y;
 	// cin>>x>>y;
 	// ll mn=min(x,y);
 	// ll mx=max(x,y);
 	// if(n>mn){
 		// n+=mx;
 	// }
 	// else{
 		// cout<<"NO"<<endl;
 		// return 0;
 	// }
 // }
 // cout<<"YES"<<endl;

get_out;
}