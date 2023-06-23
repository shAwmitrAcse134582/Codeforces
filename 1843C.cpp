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
  ll sum=0;
  while(n>=1){
    sum+=n;
    n/=2;
  }
  cout<<sum<<endl;
}
get_out;
}