#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int initial_num,final_num,temp,rem,sum=0,i;
    cout<<"Enter initial number : ";
    cin>>initial_num;
   cout <<"Enter final number: ";
    cin>>final_num;

    for(i=initial_num;i<=final_num;i++)
    {
       temp=i;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum + rem*rem*rem;
        temp=temp/10;
    }
    if(sum==i){
        cout<<"Armostrong number = "<<i<<endl;
    }
    sum=0;


    }





}


