#include <iostream>
using namespace std;

int main() {
    int row_size;
    cout<<"ENTER THE DESIRED NUMBER OF ROWS: ";
    cin>>row_size;
    if(row_size<=10){
    for(int row=row_size;row>=1;row--)
    {
        for (int col=1; col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"INSAN KA BACHA BAN";
    }


    return 0;
}