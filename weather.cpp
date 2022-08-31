#include<iostream>
using namespace std;
int main()
{
    int t,h;
    cout<<"Enter temperature:";
    cin>>t;
    cout<<"Enter humidity:";
    cin>>h;
    if (t>=30 && h>=90)
    {
        cout<<"Weather is Hot and Humid";
    }
     else if (t>=30 && h<90)
    {
        cout<<"Weather is Hot";
    }
    else if (t>=30 && h<90)
    {
        cout<<"Weather is Hot";
    }
    else if (t<30 && h>=90)
    {
        cout<<"Weather is cool and humid";
    }
     else if (t<30 && h<90)
    {
        cout<<"Weather is cool";
    }
    
    
    
  