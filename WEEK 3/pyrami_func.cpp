#include <iostream>
using namespace std;
void pyramid(double length, double width, double height, int choice)
{
    if (choice == 1)
    {
        length = length / 1000;
        width = width / 1000;
        height = height / 1000;
    }
    else if (choice == 2)
    {
        length = length / 100;
        width = width / 100;
        height = height / 100;
    }
    else if (choice == 3)
    {
        // phele se meter me hai
    }
    else if (choice == 4)
    {
        length = length * 1000;
        width = width * 1000;
        height = height * 1000;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
    cout << "The volume of the pyramid is: " << (length * width * height) / 3 << endl;
}

int main()
{
    int lenght, width, height;
    cout << "Enter the lenght of the pyramid: ";
    cin >> lenght;
    cout << "Enter the widht of the pyramid: ";
    cin >> width;
    cout << "Enter the heigth of the pyramid: ";
    cin >> height;
    int choice;
    cout << "1.millimeter" << endl;
    cout << "2.kilogram" << endl;
    cout << "3.centimeter" << endl;
    cout << "4.meter" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;

    pyramid(lenght, width, height, choice);
    return 0;
}