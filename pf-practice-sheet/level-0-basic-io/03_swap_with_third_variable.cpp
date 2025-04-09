#include <iostream>
using namespace std;
int main()
{

    int num1, num2, temp;
    cout << "Enter value in first variable : ";
    cin >> num1;
    cout << "Enter value in second variable : ";
    cin >> num2;

    // Swaping the values by using third variable temp.

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "variable 1 is " << num1 << " and variable 2 is " << num2 << endl;
    return 0;
}