#include<iostream>
using namespace std;
int main()
{
    int n[1000];
    cin>>n[1000];
    int p,count=1,sum=0;
    cin>>p;
    for(int i=0; i<n[1000]-1; i++)
    {
        cin>>n[i];
        sum=sum+n[i];
        if(sum>p)
        {
            count++;
            break;
        }
    }

    cout<<count<<endl;
}
