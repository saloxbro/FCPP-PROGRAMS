#include <iostream>
using namespace std;
void vehicle(double tax_amount, double tax_rate, double final_price, double choice, double price)
{
    if (choice == 1)
    {
        tax_amount = price * 0.06;
        final_price = price + tax_amount;
        cout << final_price << endl;
    }
    else if (choice == 2)
    {
        tax_amount = price * 0.08;
        final_price = price + tax_amount;
        cout << final_price << endl;
    }
    else if (choice == 3)
    {
        tax_amount = price * 0.1;
        final_price = price + tax_amount;
        cout << final_price << endl;
    }
    else if (choice == 4)
    {
        tax_amount = price * 0.12;
        final_price = price + tax_amount;
        cout << final_price << endl;
    }
    else if (choice == 5)
    {
        tax_amount = price * 0.15;
        final_price = price + tax_amount;
        cout << final_price << endl;
    }
    else
    {
        cout << "INVALID CHOICE";
    }
}

int main()
{
    double tax_amount, tax_rate, final_price, choice, price;
    cout << "enter the price of the vehicle" << endl;
    cin >> price;
    cout << "1:M" << endl;
    cout << "2:E" << endl;
    cout << "3:S" << endl;
    cout << "4:V" << endl;
    cout << "5:T" << endl;
    cout << "ENTER YOUR VEHICLE CODE:" << endl;
    cin >> choice;
    vehicle(tax_amount, tax_rate, final_price, choice, price);

    return 0;
}