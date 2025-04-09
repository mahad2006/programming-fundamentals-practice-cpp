#include <iostream>
using namespace std;
int main()
{

    int num1, num2, temp;
    cout << "Enter value in first variable : ";
    cin >> num1;
    cout << "Enter value in second variable : ";
    cin >> num2;

    // Swaping the values without using third variable.

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "variable 1 is " << num1 << " and variable 2 is " << num2 << endl;
    return 0;
}