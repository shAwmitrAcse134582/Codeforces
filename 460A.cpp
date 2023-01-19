#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  	
  ll n,m;
  cin>>n>>m;
  ll x=n/m;
  ll y=n+x;
  if(y%m==0)
  cout<<y+1<<endl;
  else 
  cout<<y<<endl;
     		
get_out;
}




