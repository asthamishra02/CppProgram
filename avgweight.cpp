
#include <iostream>
using namespace std;

int main() 
 {  
     int n,i,s=0,avg,w;
     cout<<"Enter number of students in class:"<<endl;
     cin>>n;
     for(i=0;i<n;i++)
     {   
         cout<<"Enter weight of students:"<<endl;
         cin>>w;
         s=s+w;
         
     }
     avg=s/n;
     cout<<"The avg weight is :"<<avg;
        
    return 0;
 }