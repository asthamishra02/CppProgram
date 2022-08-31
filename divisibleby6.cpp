
#include <iostream>
using namespace std;

int main() 
 {  
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    if(a%6==0)
    {
        cout<<"The number is divisible by 6";
    }
    else
    {
        cout<<"The number is not divisible by 6";
    }
    return 0;
 }