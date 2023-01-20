#include<iostream>
using namespace std;
int main()
{
    float cgpa;
    cin>>cgpa;
    if(cgpa<2.00)
        cout<<"Fail"<<endl;

    else if(cgpa<2.25)
        cout<<"D"<<endl;

    else if(cgpa<2.5)
        cout<<"C"<<endl;

        else if(cgpa<2.75)
        cout<<"C++"<<endl;

        else if(cgpa<3.00)
        cout<<"B-"<<endl;

        else if(cgpa<3.25)
        cout<<"B"<<endl;

        else if(cgpa<3.5)
        cout<<"B+"<<endl;

        else if(cgpa<3.75)
        cout<<"A-"<<endl;

        else if(cgpa<4.00)
            cout<<"A"<<endl;

        else if(cgpa==4.00)
            cout<<"A+"<<endl;


}
