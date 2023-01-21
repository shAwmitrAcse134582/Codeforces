#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
   ll n,k;
   cin>>n>>k;
   ll a[n];
   ll cnt=0;
   for(ll i=0;i<n;i++){
   	cin>>a[i];
   
   }
   for(ll i=0;i<n;i++){
   		if(a[i]>=a[k-1] && a[i]>0)
   	         cnt++;
   }
   cout<<cnt<<endl;

get_out;
}