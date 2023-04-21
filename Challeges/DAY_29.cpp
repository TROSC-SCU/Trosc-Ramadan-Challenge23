/**
* count_primes - a function that returns the number of prime numbers that are strictly less than n.
* @n : that number to be compared
* 0 <= n <= 5 * 106
*/

// write your algorithms here
int countPrimes(int n) {
  #include <vector>
#include <cmath>

int count_primes(int n) {
    std::vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= std::sqrt(n); i++) {
        if (is_prime[i]) {
            for (int j = i * i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (is_prime[i]) {
            count++;
        }
    }

    return count;
}
}
