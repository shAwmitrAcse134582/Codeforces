#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
using namespace std;
void solve()
{
 ll n,k;
 cin>>n>>k;
 int ar[n];
 vector<int>v(k,0);
 for(int i=0;i<n;i++)
 {
     cin>>ar[i];
     v[(i%k)]=max(v[i%k],ar[i]);
 }
 ll sum=0;
 for(int i=0;i<k;i++)
 {
     sum+=v[i];
 }
 cout<<sum<<endl;

}
int main()
{
ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

ll t;
cin>>t;
while(t--)
{

solve();

}
get_out;

}
