#include <iostream>
using namespace std;

/*
------------------------------------------------------------
Function : countPrime(int N)

Purpose:
    Counts the number of prime numbers in the range [2, N].

Logic:
    1. Iterate through every number from 2 to N.
    2. Assume the current number is prime.
    3. Check for divisors only up to √n.
    4. If a divisor is found, it is not prime.
    5. Otherwise, increment the prime count.

Time Complexity : O(N * √N)
Space Complexity: O(1)
------------------------------------------------------------
*/

int countPrime(int N) {

    int count = 0;      // Stores the total number of primes found

    // Check every number from 2 to N
    for (int n = 2; n <= N; n++) {

        // Assume the current number is prime
        bool is_prime = true;

        /*
        Check divisors only up to √n.

        Reason:
        If n has a factor larger than √n,
        the other factor must be smaller than √n.

        So, if no divisor is found up to √n,
        the number is prime.
        */
        for (int i = 2; i * i <= n; i++) {

            // If i divides n completely,
            // then n is not a prime number.
            if (n % i == 0) {
                is_prime = false;
                break;      // No need to check further
            }
        }

        // If no divisor was found,
        // then n is prime.
        if (is_prime) {
            count++;
        }
    }

    // Return the total number of prime numbers.
    return count;
}

int main() {

    cout<<countPrime(N); // 'N' should be any integer.

    return 0;
}