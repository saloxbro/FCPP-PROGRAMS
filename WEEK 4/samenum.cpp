#include <iostream>
using namespace std;
void same(int n1, int n2, int n3)
{
    if (n1 == n2 && n1 == n3 && n2 == n1 && n2 == n3 && n3 == n1 && n3 == n2)
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
    int n1, n2, n3;
    cout << "enter number 1:";
    cin >> n1;
    cout << "enter number 2:";
    cin >> n2;
    cout << "enter number 3:";
    cin >> n3;
    same(n1, n2, n3);

    return 0;
}