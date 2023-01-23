#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[m];
  for(int i=0;i<m;i++){
  	cin>>a[i];
  }
  ll sum=a[0]-1;
  for(ll i=0;i<m-1;i++){
  	if(a[i]>a[i+1])
  	{
  		sum+=n-(a[i]-a[i+1]);
  	}
  	else if(a[i]<a[i+1]){
  		sum+=a[i+1]-a[i];
  	}
  }
  cout<<sum<<endl;

get_out;
}