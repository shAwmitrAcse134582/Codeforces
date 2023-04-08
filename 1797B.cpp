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
 ll n,x;
 cin>>n>>x;
 ll a[n][n];
 for(ll i=0;i<n;i++){
 	for(ll j=0;j<n;j++){
 		cin>>a[i][j];
 	}
 }
 ll c=0;
 for(ll i=0;i<n;i++){
 	for(ll j=0;j<n;j++){
 		if(a[i][j]!=a[n-i-1][n-j-1]){
 			c++;
 		}
 	}
 }
 c=c/2;
 if(x>=c and (n%2==1 or (c-x)%2==0)){
    cout<<"YES"<<endl;
 }
 else 
 cout<<"NO"<<endl;
//  if(c<=x)
//  cout<<"YES"<<endl;
//  else
//  cout<<"NO"<<endl;
 
        
    
}
get_out;
}