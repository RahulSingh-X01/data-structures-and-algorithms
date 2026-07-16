#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function: findGCD()

Purpose:
    Finds the Greatest Common Divisor (GCD) of two numbers
    using Euclid's Algorithm.

Definition:
    The GCD (Greatest Common Divisor) is the largest
    positive integer that divides both numbers exactly.

Mathematical Property:

    gcd(a, b) = gcd(b, a % b)


this implementation compares the two numbers and
reduces the larger one by taking its remainder with
the smaller one.

Eventually, one number becomes 0.
The other non-zero number is the GCD.

---------------------------------------------------------
Example:

Find GCD(20, 28)

Initial:
    a = 20
    b = 28

Iteration 1:
    b > a

    b = 28 % 20 = 8

    a = 20
    b = 8

Iteration 2:
    a > b

    a = 20 % 8 = 4

    a = 4
    b = 8

Iteration 3:
    b > a

    b = 8 % 4 = 0

    a = 4
    b = 0

Loop stops.

Answer = 4

---------------------------------------------------------
Edge Cases:

gcd(0, 12) = 12
gcd(15, 0) = 15
gcd(0, 0) = 0 (by this implementation)

---------------------------------------------------------
Time Complexity:
    O(log(min(a, b)))

Space Complexity:
    O(1)
---------------------------------------------------------
*/

int findGCD(int a, int b)
{
    // Continue until one number becomes zero.
    while (a > 0 && b > 0)
    {
        // Reduce the larger number.
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    // One number is now zero.
    // The other number is the GCD.
    if (a == 0)
        return b;
    else
        return a;
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