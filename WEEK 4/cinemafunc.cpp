#include <iostream>
using namespace std;
void cinema(double rows, double columns, string screening)
{
    double total_seats = rows * columns;
    double total_income = 0.0;
    if (screening == "premiere")
    {

        total_income = total_seats * 12.00;
        cout << "YR TOTAL PROFIT IS:" << total_income;
    }
    if (screening == "normal")
    {

        total_income = total_seats * 7.50;
        cout << "YR TOTAL PROFIT IS:" << total_income;
    }
    if (screening == "discount")
    {

        total_income = total_seats * 5.00;
        cout << "YR TOTAL PROFIT IS:" << total_income;
    }
    if (screening != "normal" && screening != "discount" && screening != "premiere")
    {
        cout << "INVALID INPUT";
    }
}
int main()
{
    int rows, columns;
    string screening;
    cout << "ENTER THE TYPE OF SCREENING(N,D,P):";
    cin >> screening;
    cout << "ENTER THE ROWS:";
    cin >> rows;
    cout << "ENTER THE COLUMNS:";
    cin >> columns;

    cinema(rows, columns, screening);

    return 0;
}