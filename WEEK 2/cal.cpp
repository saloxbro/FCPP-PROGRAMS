#include<iostream>
using namespace std;
int cal(int a,int b);
char oper;
main()
{
    int a,b;
    cout<<"enter the operator(+,-,*,/)"<<endl;
    cin>>oper;
    cout<<"enter number one "<<endl;
    cin>>a;
    cout<<"enter number 2"<<endl;
    cin>>b;
    cout<<cal(a,b);
    return 0;
}
int cal(int a,int b)
{
    if(oper=='+')
    return a+b;
    if(oper=='*')
    return a*b;
    else if(oper=='-')
    return a-b;
    else if(oper=='/')
    return a/b;
    else{
    cout<<"get out"<<endl;
    return 0;}
}