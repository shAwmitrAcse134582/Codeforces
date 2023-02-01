#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  
  int a=2,b=10,c;
  for(int i=1;i<=b;i++) { 
  	if(a> 0 && a<=3){
  	c=b>>a;
  	}
  	 ++a;
  if(a>2){
  	a=a-i;
  }
  else 
  b+=(c-i);
  b--;
  	
  }
 
  
  cout << a <<" "<< b << " " << c/a << endl;
  

}