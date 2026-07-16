#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function: reverseNumber()

Purpose:
    Reverses the digits of a positive integer.

Logic:
    1. Extract the last digit using %10.
    2. Append it to the reversed number.
    3. Remove the last digit using /10.
    4. Repeat until the number becomes 0.

---------------------------------------------------------
Time Complexity:
    O(d)

Space Complexity:
    O(1)
---------------------------------------------------------
*/

int reverseNumber(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        // Extract last digit
        int digit = n % 10;

        // Append digit to reversed number
        reversed = (reversed * 10) + digit;

        // Remove last digit
        n /= 10;
    }

    return reversed;
}

/*
---------------------------------------------------------
Function: isPalindrome()

Purpose:
    Checks whether a number is a palindrome.

Definition:
    A palindrome number reads the same
    from left to right and right to left.

Examples:

    121     -> Palindrome
    12321   -> Palindrome
    4554    -> Palindrome
    1234    -> Not Palindrome

Algorithm:

    Step 1:
        Negative numbers are never palindrome.

    Step 2:
        Reverse the number.

    Step 3:
        Compare the reversed number
        with the original number.

    If both are equal,
    the number is a palindrome.

---------------------------------------------------------
Example:

    n = 12321

    Reverse = 12321

    Original == Reverse

    Return true

---------------------------------------------------------
Time Complexity:
    O(d)

Space Complexity:
    O(1)
---------------------------------------------------------
*/

bool isPalindrome(int n)
{
    // Negative numbers are not palindrome.
    if (n < 0)
        return false;

    int reversedNumber = reverseNumber(n);

    return n == reversedNumber;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
        cout << number << " is a Palindrome.";
    else
        cout << number << " is NOT a Palindrome.";

    return 0;
}