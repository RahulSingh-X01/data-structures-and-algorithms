#include<iostream>
using namespace std;

int main()
{
    int a = 17;
    int b = 25;
    int mod = 7;

    cout << "Addition Property\n";
    cout << (a + b) % mod << " == "
         << ((a % mod) + (b % mod)) % mod << endl;

    cout << "\nSubtraction Property\n";
    cout << ((a - b) % mod + mod) % mod << " == "
         << ((a % mod) - (b % mod) + mod) % mod << endl;

    cout << "\nMultiplication Property\n";
    cout << (1LL * a * b) % mod << " == "
         << (1LL * (a % mod) * (b % mod)) % mod << endl;

    return 0;
}