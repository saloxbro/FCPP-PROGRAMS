#include <iostream>
using namespace std;
void increase(int row_size)
{
    for (int row = 1; row<=row_size; row++)
    {
        for (int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
}
void decrease(int row_size){
    for(int row=row_size;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<"*";
        }
        cout<<endl;

    }
}

int main() {
    int row_size;
    cout<<"ENTER THE ROW SIZE:";
    cin>>row_size;
    if (row_size<=20)
    {
       increase(row_size);
       decrease(row_size);
    }
    else{
        cout<<"INSAN KA BACHA BAN";
    }
    
    

    

    return 0;
}