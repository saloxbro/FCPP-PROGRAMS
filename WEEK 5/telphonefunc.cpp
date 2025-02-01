#include <iostream>
using namespace std;
void telephone(char service_type,double charges,double min){
    if (service_type =='R'|| service_type=='r')
    {
    if(min<=50)
    {
    charges=10.00;
    cout<<"YOUR TOTAL CHARGES OF REGULAR CALL IS:"<<charges<<endl;
    }
    else if(min>50)
    {
        charges=min*0.20;
        cout<<"YOUR TOTAL CHARGES OF REGULAR CALL IS:"<<charges<<endl;
    }
}
if (service_type=='p'|| service_type=='P')
{
    char time;
    cout<<"ENTER THE TIME OF THE CALL(DAY/NIGHT)";
    cin>>time;
    if(min<=75 && (time=='D'|| time=='d')){
        charges=25.00;
        cout<<"YOUR TOTAL CHARGES OF DAY TIME PREMIUM CALL IS:"<<charges<<endl;
    }
    else if(min>75 && (time=='D'|| time=='d' ))
    {
        charges=min*0.10;
        cout<<"YOUR TOTAL CHARGES OF DAY TIME PREMIUM CALL IS:"<<charges<<endl;

    }
    else if(min<=100 && (time=='n'||time=='N'))
    {
        charges=25.00;
        cout<<"YOUR TOTAL CHARGES OF NIGHT TIME PREMIUM CALL IS:"<<charges<<endl;
    }
    else if(min>100 && (time=='n'||time=='N'))
    {
        charges=min*0.05;
        cout<<"YOUR TOTAL CHARGES OF NIGHT TIME PREMIUM CALL IS:"<<charges<<endl;
    }
    
}
}

int main() {
    char service_type;
    double charges;
    cout<<"ENTER THE TYPE OF SERVICE YOU USED(REGULAR/PREMIUM):";
    cin>>service_type;
    double min;
    cout<<"ENTER THE NUMBER OF MINUTES:";
    cin>>min;
    telephone(service_type,charges,min);
    

    return 0;
}