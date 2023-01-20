#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,n,x,c1=0,c2=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(i%2!=x%2)
            {
                if(x%2==0)
                c1++;
                 else
                c2++;
            }

        }
        if(c1==c2)
            cout<<c1<<endl;
        else
            cout<<-1<<endl;
    }
}
