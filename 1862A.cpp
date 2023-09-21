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
int n,m;
cin>>n>>m;
char a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}
string s="vika";
int k=0;
for(int i=0;i<m;i++){
    bool ok=false;
    for(int j=0;j<n;j++){
        if(a[j][i]==s[k]){
            ok =true;
            break;  
               
        } 
    } 
    if(ok==true)k++;
}
if(k==4){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
get_out;
}