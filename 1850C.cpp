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
    char ch[8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch[i][j];
            
        }
    }
   
     for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(ch[i][j]!='.'){
                cout<<ch[i][j];
            }
        }
    }
    cout<<endl;

}
get_out;
}