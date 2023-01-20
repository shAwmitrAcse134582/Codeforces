#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    for(int j=1;j<=n;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(num[i]==j)
            {
                cout<<i+1<<" ";
            }
        }
    }
}
