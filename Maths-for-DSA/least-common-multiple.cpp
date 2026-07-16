#include <iostream>
using namespace std;

/*
---------------------------------------------------------
Function: GCD()

Purpose:
    Finds the Greatest Common Divisor (GCD)
    using Euclid's Algorithm.

Time Complexity:
    O(log(min(a, b)))

Space Complexity:
    O(1)
---------------------------------------------------------
*/

int GCD(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }

    return (a == 0) ? b : a;
}

/*
---------------------------------------------------------
Function: LCM()

Purpose:
    Finds the Least Common Multiple (LCM)
    of two numbers.

Formula:

    LCM(a, b) = (a × b) / GCD(a, b)

Since LCM(0, n) = 0,
we handle the zero case separately.

To reduce the chance of integer overflow,
divide first, then multiply.

Example:

    LCM(8, 4)

    GCD = 4

    LCM = (8 / 4) × 4
         = 2 × 4
         = 8

Time Complexity:
    O(log(min(a, b)))

Space Complexity:
    O(1)
---------------------------------------------------------
*/

int LCM(int a, int b)
{
    if (a == 0 || b == 0)
        return 0;

    return (a / GCD(a, b)) * b;
}

int main()
{
    cout << LCM(8, 4);

    return 0;
}