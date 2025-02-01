#include <iostream>
using namespace std;

int main() {
    
    string fruit,week;
    double quantity,total;
    cout<<"ENTER THE NAME OF THE FRUIT YOU WANT:";
    cin>>fruit;
    cout<<"ENTER THE DAY OF WEEK:";
    cin>>week;
    cout<<"ENTER THE QUANTIY OF FRUIT:";
    cin>>quantity;
    if(week=="saturday"||week=="sunday")
    {
        
        if(fruit=="banana"){
            total=quantity*2.70;
        
        }
        else if (fruit =="apple")
        {
            total=quantity*1.25;
        }
        else if (fruit=="orange")
        {
            total=quantity*0.90;
        }
        else if (fruit=="grapefruit")
        {
            total=quantity*1.60;
        }
        else if (fruit=="kiwi")
        {
            total=quantity*3.00;
        }
        else if (fruit=="pineapples")
        {
                total=quantity*5.60;
        }
        else if (fruit=="grapes")
        {
            total=quantity*4.20;
        }
        
    
        
        
    }
    else if(week=="saturday"||week=="sunday"){
         if(fruit=="banana"){
            total=quantity*2.70;
            cout<<"YOUR TOTAL IS="<<total; 
        }
        else if (fruit =="apple")
        {
            total=quantity*1.25;
        }
        else if (fruit=="orange")
        {
            total=quantity*0.90;
        }
        else if (fruit=="grapefruit")
        {
            total=quantity*1.60;
        }
        else if (fruit=="kiwi")
        {
            total=quantity*3.00;
        }
        else if (fruit=="pineapples")
        {
                total=quantity*5.60;
        }
        else if (fruit=="grapes")
        {
            total=quantity*4.20;
        }
        

    }
    
    return 0;
}