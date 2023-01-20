#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,count=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        for(i=2;i<b;i++)
        {
            if(b%i==0)
            {
                count++;
                break;
            }

        }
        if(count==0)
            count++;
    }
    cout<<count<<endl;

}
