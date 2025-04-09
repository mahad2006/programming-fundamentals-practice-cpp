#include <iostream>
using namespace std;

int main()
{
    int a, b, c, result;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    // TODO: Find the largest among a, b, and c

    if (a > b)
    {
        if (a > c)
        {
            result = a;
        }
        else
        {
            result = c;
        }
    }
    else
    {
        if (b > c)
        {
            result = b;
        }
        else
        {
            result = c;
        }
    }

    cout << "The largest number is: " << result << endl;

    return 0;
}
