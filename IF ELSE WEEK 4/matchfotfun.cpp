#include <iostream>
using namespace std;

void football(float budget, int group, string ticket)
{
    float transport_cost = 0, ticket_cost = 0, remaining_budget;

    if (group > 0 && group <= 4)
    {
        transport_cost = budget * 0.75;
    }
    if (group > 4 && group <= 9)
    {
        transport_cost = budget * 0.60;
    }
    if (group > 10 && group <= 24)
    {
        transport_cost = budget * 0.50;
    }
    if (group > 25 && group <= 49)
    {
        transport_cost = budget * 0.40;
    }
    if (group >= 50)
    {
        transport_cost = budget * 0.25;
    }

    remaining_budget = budget - transport_cost;

    if (ticket == "VIP")
    {
        ticket_cost = group * 499.99;
    }
    if (ticket == "NORMAL")
    {
        ticket_cost = group * 249.99;
    }
    if (ticket != "VIP" && ticket != "NORMAL")
    {
        cout << "Invalid ticket type. Please enter VIP or NORMAL." << endl;
        return;
    }

    if (remaining_budget >= ticket_cost)
    {
        cout << "Congratulations! You can buy the tickets." << endl;
        cout << "Remaining budget: " << remaining_budget - ticket_cost << endl;
    }
    else
    {
        cout << "Not enough money. You need " << ticket_cost - remaining_budget << " more." << endl;
    }
}

int main()
{
    float budget;
    int group;
    string ticket;

    cout << "Enter the budget of the group: ";
    cin >> budget;
    cout << "Enter the total number of people: ";
    cin >> group;
    cout << "Enter the type of ticket (VIP/NORMAL): ";
    cin >> ticket;

    football(budget, group, ticket);

    return 0;
}
