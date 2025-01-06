#include <iostream>
using namespace std;
void digit(int n);
int sum = 0;
int dg;
int main()
{
    for (int q = 0;; q++)
    {
        int n;
        cout << "enter the numebr"<<endl;
        cin >> n;
        digit(n);
    }
    return 0;
}
void digit(int n)
{
    while (n != 0)
    {
        dg = n % 10;
        sum = sum + dg;
        n = n / 10;
    }
    cout << "YOUR SUM IS=" << sum<<endl;
}