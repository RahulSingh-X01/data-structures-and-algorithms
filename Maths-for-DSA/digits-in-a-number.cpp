#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function: printDigitsAndCount()

Purpose:
    1. Prints every digit of a number (Right to Left)
    2. Counts the total number of digits

Math Behind It:
    digit = n % 10
        -> Gives the last digit.

    n = n / 10
        -> Removes the last digit.

Since both printing and counting require traversing
the digits once, we perform both tasks in the same loop.

Example:
    Input : 7865

    Iteration 1:
        digit = 5
        print 5
        count = 1
        n = 786

    Iteration 2:
        digit = 6
        print 6
        count = 2
        n = 78

    Iteration 3:
        digit = 8
        print 8
        count = 3
        n = 7

    Iteration 4:
        digit = 7
        print 7
        count = 4
        n = 0

Output:
    Digits : 5 6 8 7
    Count  : 4
---------------------------------------------------------
*/

void printDigitsAndCount(int n)
{
    // Special case for zero
    if (n == 0)
    {
        cout << "Digits : 0\n";
        cout << "Count  : 1\n";
        return;
    }

    int count = 0;

    cout << "Digits : ";

    while (n > 0)
    {
        int digit = n % 10;      // Extract last digit

        cout << digit << " ";    // Print digit

        count++;                 // Increase digit count

        n = n / 10;              // Remove last digit
    }

    cout << "\nCount  : " << count << endl;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    printDigitsAndCount(number);

    return 0;
}