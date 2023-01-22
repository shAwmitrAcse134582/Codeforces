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
   ll cnt=0;
   for(ll i=1;i<=n;i++){
   	k+=5*i;
   	if(k<=240){
   		cnt++;
   	}
   	
   }
   cout<<cnt<<endl;

get_out;
}