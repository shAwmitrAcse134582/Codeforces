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
    ll ans;
    int n;
    cin>>n;
    int f=0;
    ll mn=0;
    ll mn1=INT_MAX;
    ll mn2=INT_MAX;

    while(n--){
        ll x;
        string s;
        cin>>x>>s;
         string a="11";
        string b="10";
        string c="01";
       if(s==a){
        ans=x;
       }
       else if(s==b)
        {
        mn1=min(x,mn1);
       }
       else if(s==c){
        mn2=min(x,mn2);
       }
    // else if(s=="00"){
    //     mn++;
    //  }

    // if(mn==n){
    //   f=1;
    // } 
     
}

   cout<<min(ans,(mn1+mn2))<<endl;


   
    
    


 }
    

get_out;
}