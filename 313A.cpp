#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
  ll n;
  cin>>n;
  ll temp=n;
  string s=to_string(temp);
  ll l1=s.length()-1;
  ll l2=s.length()-2;
 
  if(n>0)
  cout<<n<<endl;
  else if(s.size()==3 &&(s[1]=='0' || s[2]=='0')){
	// cout<<"hi"<<endl;
	cout<<0<<endl;
  }
  else{
  	// ll x=-(n%10);
  	// ll y=-(n%100);
	// cout<<x<<endl;
	// cout<<y<<endl;
  	// if(x>y){
  	// 	// cout<<n+x<<endl;
  	// 	s.erase(l,1);
  	// 	cout<<s<<endl;
  		
  	// }
  	
  	// else{
  		
  	// 	// s.pop_back();
  	// 	// cout<<s<<endl;
  	// 	s.pop_back();
  	// 	cout<<s<<endl;
  		
  	// }
	if(s[l1]>s[l2]){
		s.pop_back();
		cout<<s<<endl;
	}
	else{
		swap(s[l1],s[l2]);
		s.pop_back();
		// if(s.size()==1 && s[0]=='0')
		// cout<<0<<endl;
		// else
		cout<<s<<endl;
		// cout<<"hlw"<<endl;
	}
  	
  }

get_out;
}