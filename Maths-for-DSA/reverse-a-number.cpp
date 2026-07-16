#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function: reverseNumber()

Purpose:
    Reverses the digits of a positive integer.

Logic:

    Step 1:
        Extract the last digit using % 10.

    Step 2:
        Shift the already reversed number one place
        to the left by multiplying it by 10.

    Step 3:
        Append the extracted digit.

    Step 4:
        Remove the last digit from the original
        number using integer division (/10).

Repeat until the original number becomes 0.

---------------------------------------------------------
Example:

Input:
    1234

Iteration 1:
    digit = 4

    reversed = (0 × 10) + 4
             = 4

Iteration 2:
    digit = 3

    reversed = (4 × 10) + 3
             = 43

Iteration 3:
    digit = 2

    reversed = (43 × 10) + 2
             = 432

Iteration 4:
    digit = 1

    reversed = (432 × 10) + 1
             = 4321

Output:
    4321

---------------------------------------------------------
Time Complexity:
    O(d)

where d = number of digits

or

O(log₁₀ n)

Space Complexity:
    O(1)
---------------------------------------------------------
*/

int reverseNumber(int n)
{
    int reversed = 0;

    while (n != 0)
    {
        // Extract the last digit.
        int digit = n % 10;

        // Shift existing digits left
        // and append the new digit.
        reversed = (reversed * 10) + digit;

        // Remove the last digit.
        n = n / 10;
    }

    return reversed;
}

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Reversed Number = "
         << reverseNumber(number);

    return 0;
}