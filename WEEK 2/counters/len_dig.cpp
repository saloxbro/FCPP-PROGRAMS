#include <iostream>
using namespace std;
int countDigits(int n) 
{
    int count = 0;
    while (n != 0) 
    {
        count=count+1;
        n = n / 10;
    }
    return count;
}

int main() {
    int n;
    while (n!=0) 
    {
        cout << "ENTER THE NUMBER: ";
        cin >> n;
        int digits = countDigits(n);
        cout << "Total digits are: " << digits << endl;
    }
    return 0;
}

