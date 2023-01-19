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
  	cout<<9<<endl;
  	else if(n==2)
  	cout<<98<<endl;
  	else if(n>=3)
  	{
  		cout<<989;
  		for(int i=0;i<n-3;i++)
  		{
  			cout<<i%10;
  		}
  		cout<<endl;
  	}
  	
  	
  }

get_out;
}