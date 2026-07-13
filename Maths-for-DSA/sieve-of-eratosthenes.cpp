#include<iostream>
#include<vector>
using namespace std;

/*
------------------------------------------------------------
Function : countPrime(int n)

Purpose:
    Counts the number of prime numbers from 2 to n
    using the Sieve of Eratosthenes.

Logic:
    1. Assume every number is prime.
    2. Starting from 2, mark all multiples of each prime as non-prime.
    3. Repeat until √n.
    4. Count the numbers that remain marked as prime.

Time Complexity : O(N log log N)
Space Complexity: O(N)
------------------------------------------------------------
*/

int countPrime(int n){

    vector<bool> isPrime(n+1, true);   // Assume every number is prime initially.

    isPrime[0] = false;
    isPrime[1] = false;                // 0 and 1 are not prime by definition.

    
    // PASS 1 — Sieving (only run up to √n)
    for (int i = 2; i * i <= n; i++) {

        // If i is still marked prime,
        // mark all of its multiples as non-prime.
        if (isPrime[i]) {

            /*
            Start from i*i because all smaller multiples
            (2*i, 3*i, ..., (i-1)*i) have already been
            marked by smaller prime numbers.
            */

            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;    // Cross out multiples of i.
            }
        }
    }

    // PASS 2 — Count all remaining prime numbers.
    int count = 0;

    for (int i = 2; i <= n; i++) {

        if (isPrime[i])                // Still marked? Then it is prime.
            count++;
    }

    return count;
}

int main(){

    cout << countPrime(20);

    return 0;
}