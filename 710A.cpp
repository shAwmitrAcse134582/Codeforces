#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,k,n,minimum=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        minimum=minimum+i*5;
        if(minimum>240-k)
            cout<<i-1<<endl;
            return 0;
    }
    cout<<i-1<<endl;
    return 0;
}
