#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,s=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s=s+x;
        if(s<0)
        {
            count++;
            s=0;
        }

    }
    cout<<count<<endl;
}
