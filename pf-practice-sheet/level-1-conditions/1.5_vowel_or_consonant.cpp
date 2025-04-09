#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    // TODO: Check if ch is a vowel or consonant

    ch = tolower(ch);
    
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "The letter is a vowel." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "The letter is a consonant." << endl;
    }
    else
    {
        cout << "Invalid Input! please input a letter.";
    }

    return 0;
}
