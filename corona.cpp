#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<100)
    {
        cout<<"very low";
    }
    else if(n<1000)
    {
        cout<<"low";
    }


     else if(n<2000)
    {
        cout<<"medium";
    }

     else if(n<5000)
    {
        cout<<"high";
    }

      else if(n>=5000)
    {
        cout<<"very high";
    }





}
