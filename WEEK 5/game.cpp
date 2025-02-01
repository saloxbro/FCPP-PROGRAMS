#include <iostream>
using namespace std;

int main() {
    string temp,humidity;
    cout<<"ENTER THE TEMPERATURE(warm/cold):";
    cin>>temp;
    cout<<"ENTER THE HUMIDITY LVL(dry/humid):";
    cin>>humidity;
    if(temp=="warm" && humidity=="dry")
    {
        cout<<"PLAY TENNIS";
    }
    if(temp=="warm" && humidity=="humid")
    {
        cout<<"SWIM";
    }
    if(temp=="cold" && humidity=="dry")
    {
        cout<<"PLAY BASKETBALL";
    }
    if(temp=="cold" && humidity=="humid")
    {
        cout<<"WATCH TV";
    }
    if(temp!="warm" && temp!="cold "&& humidity!="dry" && humidity!="humid" ){
        cout<<"INVALID INPUT";
    }



    return 0;
}