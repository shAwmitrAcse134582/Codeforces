#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int fact=1,i,num;
    cout<<"Enter an integer Number : ";
    cin>>num;

    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial Number: "<<fact;


  getch();

}
