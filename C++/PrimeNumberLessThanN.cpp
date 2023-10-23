/*
Given an integer n, return the number of prime numbers that are strictly less than n.
Constraints
0<=n<=(5*pow(10,6))
*/

#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n) {
    if (n <= 1)
        return 0;
    
    int i, j, c;
    c = 0;
    vector<bool> isPrime(n, true);
    isPrime[0] = isPrime[1] = false;
    
    for (i = 2; i < n; i++) {
        if (isPrime[i] == true) {
            for (j = 2 * i; j < n; j += i)
                isPrime[j] = false;
        }
    }
    
    for (i = 2; i < n; i++) {
        if (isPrime[i])
            c++;
    }
    
    return c;
}

int main() {
    int n;
    cout << "Enter a value for n: ";
    cin >> n;
    
    int primeCount = countPrimes(n);
    
    cout << "Number of prime numbers less than " << n << " is: " << primeCount << endl;
    
    return 0;
}
