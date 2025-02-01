#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

double primorial(int n)
{
    int add = 0;
    int num = 2;
    double product = 1;

    while (add < n)
    {
        if (isPrime(num))
        {
            product *= num;
            add++;
        }
        num++;
    }
    return product;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << primorial(n) << endl;
    return 0;
}
