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
  	// ll tmp=n;
  	ll c=0,d=0;
  	bool ok=true;
  	// while(n!=1) {
  		
  	// 	if(n%6==0){
  	// 		n=n/6;
  	// 		c++;
  	// 	}
  		
  	// 	else{
  	// 			n*=2;
	// 			if(n>10^18){
	// 				cout<<-1<<endl;
	// 				break;
	// 			}
	// 			else{
    //                 d++;
	// 			}
  				
  	// 	}
  		
  	// }
//   if(c+d>=tmp)
//   cout<<-1<<endl;
//   else
//   cout<<c+d<<endl;
while(n%6==0){
	n/=6;
	c++;
}
while(n%3==0){
	n/=3;
  c+=2;
}
  if(n!=1){
	c=-1;
  }
  cout<<c<<endl;
  }

get_out;
}