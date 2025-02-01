#include <iostream>
using namespace std;
void amplify(int num)
{
    for (int i = 1 ;i<=num;i++)

    {
        if (i%4==0)
        {

            int p=i*10;
            cout<<p;
            
        }
        else{
            cout<<i;
        }
          cout<<endl;
    }
  

    
}

int main() {
    int num;
    cout<<"ENTER THE NUMBER:";
    cin>>num;
    amplify(num);
    
    

    return 0;
}