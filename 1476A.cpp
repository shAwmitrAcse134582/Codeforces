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
    ll n,k;
    cin>>n>>k;
    
    
    if(n==k)
    {
        cout<<1<<endl;
    }
      else if(n>k)
    {
        if(n%k==0){
           cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    
    else {
        if(k%n==0){
            cout<<k/n<<endl;
        }
        else
        {
            cout<<k/n +1 <<endl;
        }
       

    }
   
}
get_out;
}