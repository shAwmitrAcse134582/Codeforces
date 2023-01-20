#include<iostream>
using namespace std;
int main()
{
    int n=0,k,rem;
    cin>>n>>k;
    for(int i=0;i<=k;i++)
    {
        rem=n%10;
        if(rem==0)
        {
            n=n/10;
        }
        else
            {
            n--;
        }
    }
    cout<<n<<endl;
}
