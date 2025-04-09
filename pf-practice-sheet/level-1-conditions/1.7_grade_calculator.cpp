#include <iostream>
using namespace std;

int main()
{
    float percentage;
    char grade;

    cout << "Enter your percentage: ";
    cin >> percentage;

    // TODO: Calculate grade based on percentage
    if (percentage >= 0 && percentage <= 100)
    {
        if (percentage >= 80 && percentage <= 100)
            grade = 'a';
        else if (percentage >= 70 && percentage < 80)
            grade = 'b';
        else if (percentage >= 60 && percentage < 70)
            grade = 'c';
        else if (percentage >= 50 && percentage < 60)
            grade = 'd';
        else
            grade = 'f';

        cout << "Your grade is: " << grade << endl;
    }
    else
        cout << "Invalid Input";
    return 0;
}
