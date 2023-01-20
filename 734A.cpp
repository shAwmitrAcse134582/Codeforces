#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,a,d;
    char s;

    while(cin>>n)
    {
        a=0;
        d=0;

        for(i=1;i<=n;i++)
        {
          cin>>s;
          if(s=='A')

              a++;

          else

              d++;


        }
        if(a>d)
            cout<<"Anton"<<endl;
        else if(a<d)
            cout<<"Danik"<<endl;
        else
            cout<<"Friendship"<<endl;
    }
    return 0;


}
