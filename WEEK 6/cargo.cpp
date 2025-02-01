#include <iostream>
#include <iomanip>
using namespace std;

void cargo(int n)
{
    double weight;
    double total_weight = 0, bus_weight = 0, truck_weight = 0, train_weight = 0;
    double total_cost = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter cargo weight: ";
        cin >> weight;
        total_weight += weight;

        if (weight <= 3)
        {
            bus_weight += weight;
            total_cost += weight * 200;
        }
        else if (weight <= 11)
        {
            truck_weight += weight;
            total_cost += weight * 175;
        }
        else
        {
            train_weight += weight;
            total_cost += weight * 120;
        }
    }

    double bus_per = (bus_weight / total_weight) * 100;
    double truck_per = (truck_weight / total_weight) * 100;
    double train_per = (train_weight / total_weight) * 100;

    double avg_price = total_cost / total_weight;
    cout << fixed << setprecision(2);
    cout << avg_price << endl;
    cout << bus_per << "%" << endl;
    cout << truck_per << "%" << endl;
    cout << train_per << "%" << endl;
}

int main()
{
    int n;

    cout << "Enter number of cargos: ";
    cin >> n;
    cargo(n);
    return 0;
}
