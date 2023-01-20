#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,a[50];
    cin>>t;
    while(t--)
    {
        int count=1;
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]-a[i]<=1)
                count++;
        }
        if(count==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
