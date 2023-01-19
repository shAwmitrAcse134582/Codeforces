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
  	if(n==1)
  	cout<<"1"<<endl;
  	else if(n==2)
  	cout<<"2 1"<<endl;
  	else if(n==3)
  	cout<<"-1"<<endl;
  	else if(n==4)
  	cout<<"4 3 1 2"<<endl;
  	else
  	{
  		for(ll i=n;i>n/2+1;i--)
  		cout<<i<<' ';
  		for(ll i=1;i<=n/2+1;i++)
  		cout<<i<<' ';
  	cout<<endl;
  	}
  
  	
  }

get_out;
}