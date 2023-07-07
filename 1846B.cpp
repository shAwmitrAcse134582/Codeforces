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
   char a1,a2,a3,b1,b2,b3,c1,c2,c3;
   cin>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3;
   if((a1==a2 && a2==a3)&& a1!='.'){
    cout<<a1<<endl;
   }
   else if(a1==b1 && b1==c1 && a1!='.'){
    cout<<a1<<endl;
   }
   else if(b1==b2 && b2==b3 && b1!='.'){
    cout<<b1<<endl;
   }
   else if(a2==b2 && b2==c2 && a2!='.'){
    cout<<a2<<endl;
   }
   else if(c1==c2 && c2==c3 && c1!='.'){
    cout<<c1<<endl;
   }
   else if(a3==b3 && b3==c3 && a3!='.'){
    cout<<a3<<endl;
   }
   else if(a1==b2 && b2==c3 && a1!='.'){
    cout<<a1<<endl;
   }
   else if(a3==b2 && b2==c1 && a3!='.'){
    cout<<a3<<endl;
   }
   else{
    cout<<"DRAW"<<endl;
   }
}
get_out;
}
