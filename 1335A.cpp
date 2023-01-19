#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  	
  	ll t;
  	cin>>t;
  	while(t--)
  	{
  	 ll n;
  	 cin>>n;
  	 if(n==1 || n==2)
  	 cout<<0<<endl;
  	 else if(n%2!=0)
  	 cout<<n/2<<endl;
  	 else
  	 cout<<n/2 -1 <<endl;
  		
    }  	
     		
get_out;
}




