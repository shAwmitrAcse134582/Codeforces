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
       ll c=0,d=0,s=0;
  	for(ll i=0;i<n;i++){
  		cin>>a[i];
  		s+=a[i];
  		
  	}
  	// cout<<c<<endl;
  	// cout<<d<<endl;
  	// if(c>d)
  	// cout<<-c<<endl;
  	// else if(d>c)
  	// cout<<d<<endl;
  	// else
  	// cout<<c+d<<endl;
  	for(ll i=1;i<n;i++){
  		if(a[i]==-1 && a[i-1]==-1){
  			c=1;
  			break;
  		}
  	}
  	if(c==1)
  	cout<<s+4<<endl;
  	else{
  		if(s==n)
  		cout<<s-4<<endl;
  		else
  		cout<<s<<endl;
  	}
  }

get_out;
}