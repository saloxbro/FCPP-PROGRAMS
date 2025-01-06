#include<iostream>
using namespace std;
double petrol(double dis);

main(){
    double distance;
    cout<<"ENTER THE DISTANCE"<<endl;
    cin>>distance;  
    cout << "The fuel is: " <<petrol(distance);
    return 0;
}
double petrol(double dis)
{
    double y;
    y=dis*10;
return y;
}