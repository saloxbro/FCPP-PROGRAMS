#include <iostream>
using namespace std;
void grade(string name, double percentage)
{

    if (percentage >= 90)
    {
        cout << "GRADE:\tA+";
    }
    if (percentage < 90 && percentage >= 80)
    {
        cout << "GRADE:\tA";
    }
    if (percentage < 80 && percentage >= 70)
    {
        cout << "GRADE:\tB+";
    }
    if (percentage < 70 && percentage >= 60)
    {
        cout << "GRADE:\tB";
    }
    if (percentage < 60 && percentage >= 50)
    {
        cout << "GRADE:\tC";
    }
    if (percentage < 50 && percentage >= 40)
    {
        cout << "GRADE:\tD";
    }
    if (percentage < 40)
    {
        cout << "GRADE:\tF";
    }
}

int main()
{
    string name;
    cout << "ENTER THE NAME OF THE STUDENT:";
    cin >> name;
    double english, math, science, biology, chemistry, pakstudy;
    cout << "ENTER THE MARKS OF ENGLISH: ";
    cin >> english;
    cout << "ENTER THE MARKS OF MATH: ";
    cin >> math;
    cout << "ENTER THE MARKS OF SCIENCE: ";
    cin >> science;
    cout << "ENTER THE MARKS OF BIOLOGY :";
    cin >> biology;
    cout << "ENTER THE MARKS OF CHEMISTRY: ";
    cin >> chemistry;
    cout << "ENTER THE MARKS OF PAKSTUDY:";
    cin >> pakstudy;
    double obtain_marks = english + math + science + biology + chemistry + pakstudy;
    double percentage = (obtain_marks / 600) * 100;
    cout << "PERCENTAGE:\t" << percentage<<"%" << endl;
    cout << "NAME OF THE STUDENt:\t" << name << endl;
    grade(name, percentage);

    return 0;
}