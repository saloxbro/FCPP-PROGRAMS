#include <iostream>
using namespace std;
void larger(int a, int b, int c)
{
    if (a > b && a > c)
    {
        cout << "the greatest number among" << a << "," << b << "and" << c << "is:" << a;
    }
    if (b > a && b > c)
    {
        cout << "the greatest number among" << a << "," << b << "and" << c << "is:" << b;
    }
    if (c > a && c > b)
    {
        cout << "the greatest number among" << a << "," << b << "and" << c << "is:" << c;
    }
}
int main()
{
    int a, b, c;
    cout << "ENTER 1st NUMBERS:" << endl;
    cin >> a;
    cout << "ENTER 2nd NUMBER:" << endl;
    cin >> b;
    cout << "ENTER 3rd NUMBER:" << endl;
    cin >> c;
    larger(a, b, c);

    return 0;
}