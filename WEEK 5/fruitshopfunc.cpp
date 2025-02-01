#include <iostream>
using namespace std;
void fruitshop(string fruit,string week,double quantity,double& total){
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
        
        else{
            cout<<"ERROR 404 NO FRUIT FOUND";
            total=0;
            
         }  
         
        
    }
    else if(week!="sunday"&& week!="saturday")
    {
         if(fruit=="banana")
         {
            total=quantity*2.50;
             
        }
        else if (fruit =="apple")
        {
            total=quantity*1.20;
        }
        else if (fruit=="orange")
        {
            total=quantity*0.85;
        }
        else if (fruit=="grapefruit")
        {
            total=quantity*1.45;
        }
        else if (fruit=="kiwi")
        {
            total=quantity*2.70;
        }
        else if (fruit=="pineapples")
        {
                total=quantity*5.50;
        }
        else if (fruit=="grapes")
        {
            total=quantity*3.85;
        }
        
        else{
            cout<<"ERORR 404 NO FRUIT FOUND";
            total=0;
            
        }
        

    }
    else{
        cout<<"YOU ENTERED WRONG DAY";
        
    
    }
    
    
}

int main() {
    string fruit,week;
    double quantity,total;
    cout<<"ENTER THE NAME OF THE FRUIT YOU WANT:";
    cin>>fruit;
    cout<<"ENTER THE DAY OF WEEK:";
    cin>>week;
    cout<<"ENTER THE QUANTIY OF FRUIT:";
    cin>>quantity;
    fruitshop(fruit,week,quantity,total);
    cout<<"YOUR TOTAL IS="<<total;

    return 0;
}