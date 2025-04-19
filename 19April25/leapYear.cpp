#include <iostream>
using namespace std;

int main()
{

    int year;
    cout << "Enter the year to be checked: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "Leap Year!\n";
            }
            else
            {
                cout << "Not a leap year!\n";
            }
        }
        else
        {
            cout << "Leap Year!\n";
        }
    }
    else
    {
        cout << "Not a leap year!\n";
    }

    return 0;
}