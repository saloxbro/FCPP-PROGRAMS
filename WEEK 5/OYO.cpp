#include <iostream>
#include <cmath> // For floor function
using namespace std;

int main() {
    string yearType;
    int holidays, hometownWeekends;
    double totalPlays;

    // Input
    cout << "Enter year type (leap/normal): ";
    cin >> yearType;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of weekends Vladimir travels to hometown: ";
    cin >> hometownWeekends;

    // Constants and calculations
    int totalWeekends = 48;
    int weekendsInSofia = totalWeekends - hometownWeekends;
    double weekendsForPlaying = weekendsInSofia * 3.0 / 4.0; // 3/4 weekends in Sofia
    double holidayPlays = holidays * 2.0 / 3.0; // 2/3 of holidays
    double hometownPlays = hometownWeekends; // Plays in hometown every weekend he travels

    // Total plays
    totalPlays = weekendsForPlaying + holidayPlays + hometownPlays;

    // Add 15% more plays if it’s a leap year
    if (yearType == "leap") {
        totalPlays += totalPlays * 0.15;
    }

    // Round down to the nearest whole number
    cout << "Total volleyball games played: " << floor(totalPlays) << endl;

    return 0;
}
