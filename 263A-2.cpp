#include<bits/stdc++.h>
#define ll  long long int
#define pb  push_back
#define get_out return 0
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
fast;
int a[5][5];
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>a[i][j];
    }
}
int x,y;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(a[i][j]==1){
           x=i+1;
           y=j+1;
           break;
        }
        // cout<<a[i][j]<<" ";
    }
    // cout<<endl;
}
// cout<<x<<' '<<y<<endl;
cout<<abs(3-x)+abs(3-y)<<endl;
get_out;
}