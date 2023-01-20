#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s[100],i,count=0;
    for(i=0;i<4;i++)
    {
        cin>>s[i];
    }
    sort(s,s+4);
    for(i=0;i<4;i++)
    {
        if(s[i]==s[i+1])
            count++;
    }
    cout<<count<<endl;
}
