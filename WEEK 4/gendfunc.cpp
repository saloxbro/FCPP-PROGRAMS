#include <iostream>
using namespace std;
void title(string gender, double age)
{

    if (age >= 16 && gender == "male")
    {
        cout << "YOUR TITTLE IS:Mr.";
    }
    if (age < 16 && gender == "male")
    {
        cout << "YOUR TITTLE IS:Master.";
    }
    if (age >= 16 && gender == "female")
    {
        cout << "YOUR TITTLE IS:Ms.";
    }
    if (age < 16 && gender == "female")
    {
        cout << "YOUR TITTLE IS:Miss.";
    }
}

int main()
{
    double age;
    cout << "ENTER YOUR AGE PLEASE!:";
    cin >> age;
    string gender;
    cout << "ENTER YOU GENDER PLEASE:";
    cin >> gender;
    title(gender,age);

    return 0;
}