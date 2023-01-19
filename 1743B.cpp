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

	 ll tc;
	 cin>>tc;
	 while(tc--)
	 {
	   ll n;
	   cin>>n;
	   ll a[n];
	   for(ll i=1;i<=n;i++)
	   {
	   	cin>>a[i];
	   }
	   for(ll i=1;i<=n;i++)
	   {
	   if(i%2==0)
	   cout<<i<<" ";

	   }
	   for(ll i=1;i<=n;i++)
	   {
	   if(i%2!=0)
	   cout<<i<<" ";

	   }
	   cout<<endl;


     }

get_out;

}



