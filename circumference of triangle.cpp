#include<iostream>
using namespace std;
int main()
{
    int l1,l2,l3,cir;
    cout<<"Enter length:"<<endl;
    cin>>l1;
    cout<<"Enter length:"<<endl;
    cin>>l2;
    cout<<"Enter length:"<<endl;
    cin>>l3;
    if (l1+l2>l3)
    {   
        cir = l1+l2+l3;
        cout<<"The circumference is :"<<cir;
    }
   
    else
    {
        cout<<"This is not a triangle";
    }
}