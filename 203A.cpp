#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 ll s,n,x,y;
 cin>>s>>n;
 for(ll i=0;i<n;i++)
 {
 	cin>>x>>y;
 	ll mn=min(x,y);
 	ll mx=max(x,y);
 	s+=mx;
 	if(s>mn)
 		cout<<"YES"<<endl;
 		else
 	    cout<<"NO"<<endl;
 	  
 }

get_out;
}