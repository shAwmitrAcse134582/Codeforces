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
  ll x,y,z;
  ll sum1=0,sum2=0,sum3=0;
  while(t--)
  {
  	cin>>x>>y>>z;
  	sum1+=x;
  	sum2+=y;
  	sum3+=z;
  	
  }
if(sum1==0 && sum2==0 && sum3==0)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
get_out;
}