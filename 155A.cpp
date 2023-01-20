#include<iostream>
using namespace std;
int main()
{
    int i,min,max,cnt=0,n,a;
    cin>>n>>a;
    min=a,max=a;
    for(i=1; i<n; i++)
    {
        cin>>a;
        if(a>max)
        {
            max=a;
            cnt++;
        }
        if(a<min)
        {
            min=a;
            cnt++;
        }
    }
    cout<<cnt;
}
