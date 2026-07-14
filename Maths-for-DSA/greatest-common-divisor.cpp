#include <iostream>
#include <algorithm>
using namespace std;

/*
---------------------------------------------------------
Function: findGCD()

Purpose:
    Finds the Greatest Common Divisor (GCD) of two numbers
    using the Brute Force approach.

Definition:
    The GCD (Greatest Common Divisor) is the largest
    positive integer that divides both numbers exactly.

Examples:
    GCD(20, 28) = 4
    GCD(18, 24) = 6
    GCD(15, 25) = 5

Logic:

    Step 1:
        Handle edge cases involving zero.

        gcd(0, b) = b
        gcd(a, 0) = a

    Step 2:
        The largest possible GCD can never be greater
        than the smaller of the two numbers.

        Example:
            a = 20
            b = 28

            Maximum possible GCD = 20

    Step 3:
        Start checking from min(a, b) down to 1.

        The first number that divides both numbers
        is automatically the Greatest Common Divisor.

Example:

    a = 20
    b = 28

    Check:

    20 ❌
    19 ❌
    18 ❌
    ...
    5  ❌
    4  ✅

    Return 4 immediately.

Time Complexity:
    O(min(a, b))

Space Complexity:
    O(1)
---------------------------------------------------------
*/

int findGCD(int a, int b)
{
    // Handle edge cases involving 0
    // gcd(0, b) = b
    if (a == 0)
        return b;

    // gcd(a, 0) = a
    if (b == 0)
        return a;

    // Start checking from the largest
    // possible divisor towards 1.

    for (int i = min(a, b); i >= 1; i--)
    {
        // If 'i' divides both numbers exactly,
        // it is a common divisor.
        if (a % i == 0 && b % i == 0)
        {
            // Since we are moving from largest
            // to smallest, this is the GCD.
            return i;
        }
    }

    // This line is reached only when
    // the numbers are co-prime.

    return 1;
}

int main()
{
    int a, b;

    cout << "Enter first number : ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "GCD = " << findGCD(a, b);

    return 0;
}