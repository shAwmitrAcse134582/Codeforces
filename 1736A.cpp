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
	  ll n;
	  cin>>n;
	  ll a[n];
	  ll b[n];
	   ll c1=0,c2=0,c3=0,c4=0;
	  for(ll i=0;i<n;i++)
	  {
	  	cin>>a[i];
	  	if(a[i]==1)
	  	c1++;
	  	else
	  	c2++;
	  }

	  for(ll i=0;i<n;i++)
	  {
	  	cin>>b[i];
	  	if(b[i]==1)
         c3++;
         else
         c4++;
	  }
	  if(c1==c3 && c2==c4)
	  {
	  	int ok=0;
	  	for(ll i=0;i<n;i++)

	  		if(a[i]!=b[i])
	  		{
	  			ok=1;
	  			break;
	  		}
	  		if(ok)
	  		cout<<1<<endl;
	  		else
	  		cout<<0<<endl;

	  }
	  	else{


	  	ll cnt=0;
	  	for(ll i=0;i<n;i++)
            if(a[i]!=b[i])
	  		cnt++;


	  	ll mn=abs(c1-c3);
	  	cout<<min(mn+1,cnt)<<endl;
	  }

	 }



get_out;

}

