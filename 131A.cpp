#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  fast;
 string s;
 cin>>s;
 ll c=0,d=0;
 ll x=s.size();
 for(ll i=1;i<x;i++)
 {
 	if(islower(s[i])){
 		c++;
 	}
 }
 for(ll i=0;i<x;i++)
 {
 	if(isupper(s[i])){
 		d++;
 	}
 }
 
  if(islower(s[0]) && c==0)
    {
        s[0] = toupper(s[0]);
        for(int i = 1; i < x; i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
        return 0;
    }
    
      if(d==s.size())
    {
        for(int i=0; i<x; i++)
        {
            s[i]=tolower(s[i]);
        }
        cout<<s;
      
    }
    else{
    	cout<<s;
    }
      
    
 
  


get_out;
}