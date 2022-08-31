#include <iostream>
 using namespace std;
int main() 
{   
    int date,i;
    
    for(i=1;i<1000;i++)
    {
        cout<<"guess the date:"<<endl;
        cin>>date;
        if(date==2)
        {
            cout<<"correct guess";
            break;
        } 
        else 
        {
            cout<<"Incorrect guess"<<endl;
        }
        
        
        
    }

    return 0;
}
