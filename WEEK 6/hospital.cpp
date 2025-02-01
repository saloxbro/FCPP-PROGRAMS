#include <iostream>
using namespace std;

void calculatePatients(int days) {
    int doctors = 7;
    int treated = 0; 
    int untreated = 0;
    int patients;

    for (int day = 1; day <= days; day++) {
        cout << "Enter patients for day " << day << ": ";
        cin >> patients;

        if (day % 3 == 0 && untreated > treated) {
            doctors++; 
            }

        if (patients <= doctors) {
            treated += patients;
        } else {
            treated += doctors;
            untreated += (patients - doctors);
        }
    }

   
    cout << "Treated patients: " << treated << endl;
    cout << "Untreated patients: " << untreated << endl;
}

int main() {
    int days;
    cout << "Enter number of days: ";
    cin >> days;

    calculatePatients(days); 

    return 0;
}
