#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num,i,count=0;
    cout<<"enter a number : ";
    cin>>num;

    for(i=2; i<num; i++)
    {
        if(num%i ==0)
        {
            count++;
            break;
        }
    }

    if(count==0)

        cout<<"Prime number";

    else
        cout<<"Not a prime Number ";

        getch();

}
