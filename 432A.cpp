#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,count=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>x;
        if(5-x>=k)
        {
            count++;
        }

    }
    cout<<count/3;

}
