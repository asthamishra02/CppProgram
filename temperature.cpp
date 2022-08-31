#include <iostream>
 using namespace std;
int main() 
{   
   char c[100];
   int n,i,t,j;
   cout<<"Number of employees:";
   cin>>n;
   for(i=1;i<=n;i++)
   {   
       cout<<"Enter name:";
       cin>>c;
       cout<<"Enter temperature:";
       cin>>t;
       

      
       
   }
   for(i=1;i<=n;i++)
        {
           cout<<"Temperature of" <<'\t'<<c<<'\t'<<"is"<<'\t'<<t<<endl;
        }

    return 0;
}