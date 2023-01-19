#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;

int main()
{
 ios::sync_with_stdio(false);
	 cin.tie(0);
	 cout.tie(0);
	 ll t;
	 cin>>t;
	 while(t--)
	 {
	  ll n,s=1;
	  cin>>n;
	   vector<ll>a(n);
	   for(ll i=0;i<n;i++)
	   {
	   	cin>>a[i];

	   }
	   for(ll i=0;i<n-2;i++)
	   {
	   	if(__gcd(a[i],a[i+2])>__gcd(a[i],a[i+1]))
	   	{
	   		cout<<"NO"<<endl;
	   		s=0;
	   		break;
	   	}
	   }
	   if(!s)
	   continue;
	   cout<<"YES"<<endl;


	 }

get_out;

}


