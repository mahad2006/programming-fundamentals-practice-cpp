#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    // Check if the year is divisible by 4
    if (year % 4 == 0)
    {
        // If divisible by 100, check if it is divisible by 400
        if (year % 100 == 0)
        {
            // If divisible by 400, it's a leap year
            if (year % 400 == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        // If not divisible by 100, it's a leap year
        return true;
    }
    return false;
}

int main()
{
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (isLeapYear(year))
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
