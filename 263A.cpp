#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            int h;
            cin>>h;
            if(h)
            {
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(3-a)+ abs(3-b);
}
