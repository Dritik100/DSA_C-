#include <iostream>
#include <vector>

using namespace std;

// Function to count the number of prime numbers less than n using Sieve of Eratosthenes
int countPrimes(int n) {
    if (n <= 2) return 0;  // No primes less than 2

    vector<bool> isPrime(n, true);  // Create a boolean vector to mark prime numbers
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime

    // Apply the Sieve of Eratosthenes
    for (int i = 2; i * i < n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j < n; j += i) {
                isPrime[j] = false;  // Mark multiples of i as non-prime
            }
        }
    }

    // Count prime numbers
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = countPrimes(n);
    cout << "Number of primes less than " << n << ": " << result << endl;

    return 0;
}
