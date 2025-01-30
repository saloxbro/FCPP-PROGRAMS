#include <iostream>
using namespace std;
double perim(char c,double n)
{
    if(c =='s')
    {
        return 4*n;
    }
   if(c=='c') {
    
    return 6.28*n;
   }
   if(c=='t'){
    return 3*n;
   }
   if(c='h')
   {
    return 6*n;
   }
    return 0;
   }


int main() {
    double n;
    char c;
    cout << "Enter the character for the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin>>c;
    cout<<"enter the number";
    cin>>n;
    double result = perim(c, n);
    if (result == 0) {
        cout << "Invalid" << endl;
    } else {
        cout << "Perimeter " << result << endl;
    }

    

    return 0;
}