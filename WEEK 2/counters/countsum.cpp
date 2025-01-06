#include <iostream>
using namespace std;

int main() {
    int n,dg;
    int sum=0;
    cout<<"enter the number";
    cin>>n;
    while(n!=0)
    {
    dg=n%10;
    sum=sum+dg;
    n=n/10;
    }
    cout<<"SUM OF Your Digits="<<sum<<endl;
    return 0;
}

