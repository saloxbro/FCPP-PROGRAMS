#include <iostream>
using namespace std;
void fib(int n1,int n2,int n3,int next){
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

}

int main() {
    int n1,n2,n3,next;
    cout<<"ENTER THE STARTING POINT:";
    cin>>n1;
    cout<<"ENTER THE SECOND NUMBER:";
    cin>>n2;
    cout<<"ENTER THE ENDING POINT:";
    cin>>n3;
    fib(n1,n2,n3,next);
    
    


    return 0;
}
