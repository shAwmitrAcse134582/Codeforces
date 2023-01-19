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
  	 ll n,sum=0;
  	 cin>>n;
  	
  	while(n/10!=0)
  	{
  		
  		sum+=n/10*10;
			n-=n/10*9;
  	}
  
  cout<<sum+n<<endl;
    }  	
     		
get_out;
}




