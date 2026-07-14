#include <iostream>
#include <cmath>
using namespace std;

/*
---------------------------------------------------------
Function: isArmstrong()

Purpose:
    Checks whether a given number is an Armstrong number.

Definition:
    A number having 'd' digits is called an Armstrong
    number if

        sum of (each digit ^ d) == original number

Examples:
    153  -> 1³ + 5³ + 3³ = 153
    370  -> 3³ + 7³ + 0³ = 370
    9474 -> 9⁴ + 4⁴ + 7⁴ + 4⁴ = 9474

Algorithm:
    Step 1 : Count the number of digits.
    Step 2 : Extract each digit using %10.
    Step 3 : Add digit^count to the sum.
    Step 4 : Compare the sum with the original number.

Time Complexity:
    O(d)

Space Complexity:
    O(1)
---------------------------------------------------------
*/

bool isArmstrong(int n)
{
    // Store original number because 'n' will change.
    int original = n;

    // -------- Step 1 : Count digits --------
    int digits = 0;
    int temp = n;

    if (temp == 0)
        digits = 1;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    // -------- Step 2 : Calculate Armstrong Sum --------
    long long armstrongSum = 0;

    while (n > 0)
    {
        int digit = n % 10;                 // Extract last digit

        armstrongSum += pow(digit, digits); // Add digit^digits

        n /= 10;                            // Remove last digit
    }

    // -------- Step 3 : Compare --------
    return original == armstrongSum;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong Number.";
    else
        cout << num << " is NOT an Armstrong Number.";

    return 0;
}