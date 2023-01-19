#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll n;
  cin>>n;
  ll a[n];
  int c1=0,c2=0,c3=0,c4=0;
  
  for(ll i=0;i<n;i++)
  {
  	cin>>a[i];
  if(a[i]==1)
  c1++;
  else if(a[i]==2)
  c2++;
  else if(a[i]==3)
  c3++;
  else
  c4++;
  
  } 
 

cout<<c4+c3+(c2*2+max(0,c1-c3)+3)/4<<endl;
 
  

get_out;
}