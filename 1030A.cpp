#include<iostream>
using namespace std;
int main()
{
    int n,i,num[100],c1=0,c2=0;
    cin>>n;
    while(n>0)
    {
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            if(num[i]==0)
                c1++;
            else if(num[i]==1)
                c2++;
        }
        if(c2>=1)
            cout<<"HARD"<<endl;
        else
            cout<<"EASY"<<endl;
    c1=0,c2=0;
    }
}
