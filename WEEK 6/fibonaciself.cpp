#include <iostream>
using namespace std;

int main() {
    double n1,n2,n3,next;
    cout<<"ENTER THE STARTING POINT:";
    cin>>n1;
    cout<<"ENTER THE SECOND NUMBER:";
    cin>>n2;
    cout<<"ENTER THE ENDING POINT:";
    cin>>n3;
    for(int i=1;i<=n3;i++)
    {
        
    {
        next=n1+n2;
        if (i==n3)
        {
            cout<<next<<".";
        }
        else{
            cout<<next<<"  ,";

        }
        
        
        n1=n2;
        n2=next;
    }
    }
    


    return 0;
}