#include <iostream>
using namespace std;
double dis(string day, string month)
{
    double discount = 0.0;
    if (month == "october" && day == "sunday")
    {
        discount = 0.10;
    }
    return discount;
}
int main()
{
    string day, month;
    double discount = 0;
    double total_price;
    double after_dis;
    cout << "ENTER THE MONTH:";
    cin >> month;
    cout << "ENTER THE DAY";
    cin >> day;
    discount = dis(day, month);
    cout << "ENTER THE TOTAL AMOUNT";
    cin >> total_price;
    after_dis = total_price * (1 - discount);
    cout << "YOUR DISCOUNT IS=" << after_dis << endl;

    return 0;
}