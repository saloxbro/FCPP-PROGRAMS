#include <iostream>
using namespace std;
void sign(string month, int birthday)
{
    if ((month == "march" && birthday >= 21) || (month == "april" && birthday <= 19))
    {

        cout << "YOUR ZODIAC SIGN IS ARIES!" << endl;
    }
    else if ((month == "april" && birthday >= 20) || (month == "may" && birthday <= 20))
    {
        cout << "YOUR ZODIAC SIGN IS TAURUS!" << endl;
    }
    else if ((month == "may" && birthday >= 21) || (month == "june" && birthday <= 20))
    {
        cout << "YOUR ZODIAC SIGN IS GEMINI!" << endl;
    }
    else if ((month == "june" && birthday >= 21) || (month == "july" && birthday <= 22))
    {
        cout << "YOUR ZODIAC SIGN IS CANCER!" << endl;
    }
    else if ((month == "july" && birthday >= 23) || (month == "august" && birthday <= 22))
    {
        cout << "YOUR ZODIAC SIGN IS LEO!" << endl;
    }
    else if ((month == "august" && birthday >= 23) || (month == "september" && birthday <= 22))
    {
        cout << "YOUR ZODIAC SIGN IS VIRGO!" << endl;
    }
    else if ((month == "september" && birthday >= 23) || (month == "october" && birthday <= 22))
    {
        cout << "YOUR ZODIAC SIGN IS LIBRA!" << endl;
    }
    else if ((month == "october" && birthday >= 23) || (month == "november" && birthday <= 21))
    {
        cout << "YOUR ZODIAC SIGN IS SCORPIO!" << endl;
    }
    else if ((month == "november" && birthday >= 22) || (month == "december" && birthday <= 21))
    {
        cout << "YOUR ZODIAC SIGN IS SAGITTARIUS!" << endl;
    }
    else if ((month == "december" && birthday >= 22) || (month == "january" && birthday <= 19))
    {

        cout << "YOUR ZODIAC SIGN IS CAPRICORN!" << endl;
    }
    else if ((month == "january" && birthday >= 20) || (month == "february" && birthday <= 18))
    {
        cout << "YOUR ZODIAC SIGN IS AQUARIUS!" << endl;
    }
    else if ((month == "february" && birthday >= 19) || (month == "march" && birthday <= 20))
    {
        cout << "YOUR ZODIAC SIGN IS PISCES!" << endl;
    }
    else
    {
        cout << "INVALID INPUT. PLEASE CHECK YOUR BIRTHDAY AND MONTH!" << endl;
    }
}

int main()
{
    int birthday;
    cout << "ENTER YOUR BIRTHDAY: ";
    cin >> birthday;

    string month;
    cout << "ENTER THE MONTH OF YOUR BIRTH : ";
    cin >> month;
    sign(month,birthday);

    return 0;
}