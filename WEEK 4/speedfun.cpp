#include <iostream>
using namespace std;
void meter(double speed)
{
    if(speed<=10 )
    {
        cout<<"SLOW";
    }
    if(speed>10 && speed<=50 )
    {
        cout<<"AVERAGE";
    }
    if(speed>50 && speed<=150 )
    {
        cout<<"FAST";
    }
    if(speed>150 && speed<=1000 )
    {
        cout<<"ULTRA-FAST";
    }
    if (speed>1000)
    {
        cout<<"WAY TO JANNAH ";
    }
    
}

int main() {
    double speed;
    cout<<"ENTER THE SPEED OF THE VEHICLE:";
    cin>>speed;
    meter(speed);
    

    return 0;
}