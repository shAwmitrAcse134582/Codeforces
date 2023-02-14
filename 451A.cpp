#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll n,m;
  cin>>n>>m;
  // ll x=n*m;
  // if(n==1 || m==1)
  // cout<<"Akshat"<<endl;
// else  if(x%4!=1)
  // cout<<"Malvika"<<endl;
  // else
  // cout<<"Akshat"<<endl;
  // if(n%2==0 && m!=1)
     // cout<<"Malvika"<<endl;
     // else
       // cout<<"Akshat"<<endl;
       ll c=0;
while(n!=0 && m!=0){
	n=n-1;
	m=m-1;
	c++;
	
	
}
if(c%2==0){
	cout<<"Malvika"<<endl;
}
else{
	cout<<"Akshat"<<endl;
}


get_out;
}