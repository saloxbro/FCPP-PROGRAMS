#include <iostream>
using namespace std;
int calculate(int age, int machine_price, int toy_price)
{
    int total_toys = 0;
    int total_money = 0;
    int birthday_money = 10;
    for (int i = 1; i <= age; i++)
    {
        if (i % 2 == 0)
        {
            total_money += (birthday_money - 1);
            birthday_money += +10;
        }
        else
        {
            total_toys++;
        }
    }
    total_money += total_toys * toy_price;
    return total_money - machine_price;
}

int main()
{
    int age, machine_price, toy_price;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter washing machine price: ";
    cin >> machine_price;
    cout << "Enter unit price of each toy: ";
    cin >> toy_price;

    int remaining = calculate(age, machine_price, toy_price);

    if (remaining >= 0)
    {
        cout << "YES!!! YOU CAN BUY THE MACHINE"<<endl<<"YR REMANINING AMOUNT IS:"
             << remaining;
    }
    else
    {
        cout << "NO!! NEED MORE MONEY" << endl
             << remaining;
    }

    return 0;
}