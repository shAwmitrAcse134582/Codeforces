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
  if(t==0)
  cout<<0<<endl;
  else if(t%2==0)
  cout<<t+1<<endl;
  else
  cout<<(t+1)/2<<endl;

get_out;
}