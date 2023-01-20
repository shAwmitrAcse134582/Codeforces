#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,temp,rem,sum=0;
    cout<<"Enter number : ";
    cin>>num;

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10 + rem;
        temp=temp/10;
    }
    if(num==sum)
        cout<<"pallindrome number";
    else
    cout<<"Not pallindrome number";

}

