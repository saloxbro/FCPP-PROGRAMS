#include <iostream>
using namespace std;
void table(int n);
int main() {
    int num;
    cout<<"enter number";
    cin>>num;
    table(num);
    return 0;
}
void table(int n)
{
    int i;
    for(i=1;i<=10;i++){
    cout <<n<<"x"<<i<<"="<<n*i<<endl;
    }
  
}