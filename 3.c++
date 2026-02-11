#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, rem, original;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0)
    {
        rem = n % 10;          // last digit
        rev = rev * 10 + rem; // reverse banana
        n = n / 10;            // last digit remove
    }

    if (rev == original)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }

    return 0;
} 
