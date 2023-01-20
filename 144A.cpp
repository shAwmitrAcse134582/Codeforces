#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],max=0,min=101,max1,min1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>max)
        {
            max=a[i];
            max1=i;
        }
        if(a[i]<=min)
        {
            min=a[i];
            min1=i;
        }
    }
    if(max1>min1)
    {
        min1++;
    }
    cout<<max1+(n-1)-min1;


}
