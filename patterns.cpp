#include<iostream>
using namespace std;
int main()
{
    int n,r,i,j;
    cout<<"Enter number of rows:";
    cin>>r;
    for(i=r;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}