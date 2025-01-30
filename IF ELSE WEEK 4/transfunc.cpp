#include <iostream>
using namespace std;
void transport(double total_fare,double distance,string time){
    if(distance<20){
        if(time=="day"){
            total_fare=0.70+distance*0.79;
            cout<<"The lowest rate for"<<distance<< "is\t"<<total_fare<<"EUR";
        }
        if (time=="night")
        {
            total_fare=0.70+distance*0.90;
            cout<<"The lowest rate for"<<distance<<"is\t"<<total_fare<<"EUR";
        }
        
    }
    if(distance>=20 && distance<100){
        total_fare=distance*0.09;
        cout<<"The lowest rate for"<<distance<<"is\t"<<total_fare<<"EUR";
        }
    if (distance>=100)
    { 
        total_fare=distance*0.06;
        cout<<"The lowest rate for"<<distance<<"is\t"<<total_fare<<"EUR";          
        
    }
}

int main() {
    double distance,total_fare;
    cout<<"ENTER THE DISTANCE:";
    cin>>distance;
    string time;
    cout<<"ENTER THE TIME OF (DAY/NIGHT):";
    cin>>time;
    transport(total_fare,distance,time);

    return 0;
}