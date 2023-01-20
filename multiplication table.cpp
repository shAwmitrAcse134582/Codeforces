#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    while(1)
    {
        for(int i=1; i<=10; i++)
        {
            cout<<num<<"X"<<i<<" = "<<(num*i)<<endl;
            break;

        }
    }


    getch();
}
