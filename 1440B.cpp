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
  	int n,k;
  	cin>>n>>k;
  	int a[n*k];
  	for(int i=0;i<n*k;i++)
  	{
  		cin>>a[i];
  	}
  	ll s=0;
  	for(int i=(n-1)/2 *k;i<n*k;i+=(n/2)+1)
  	{
  		s+=a[i];
  	}
  	cout<<s<<endl;
  	
  }

get_out;
}