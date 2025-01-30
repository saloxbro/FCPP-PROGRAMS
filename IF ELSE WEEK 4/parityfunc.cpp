#include <iostream>
using namespace std;
void parity(int a)

{
    int hun = hun / 100;
    int mod = mod % 100;
    int unit = unit % 10;
    int sum = hun + mod + unit;
    if (sum % 2 == 0 && a % 2 == 0)
    {
        cout << true;
    }
    else
    {
        cout << false;
    }
}

int main()
{
    int num;
    cout << "ENTER THREE DIGIT NUMBER";
    cin >> num;
    if (num >=100 && num <= 999)
    {
        parity(num);
    }
    else
    {
        cout << "INVALID ONLY THREE INPUTS ALLOWED";
    }
    return 0;
}