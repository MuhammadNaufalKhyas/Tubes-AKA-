#include <iostream>

using namespace std;

bool testPrime(int n, int div) {
    if (n / div < div)
        return true;
    else
    if (n % div == 0)
        return false;
    else
        return testPrime(n, div + 1);
}

bool isPrime(int n) {
    return n >= 2 && testPrime(n, 2);
}
void printPrimes(int p, int n) {
    if (n > 0) {
        if (isPrime(p)) {
            printf("%d ", p);
            printPrimes(p + 1, n - 1);
        } else {
            printPrimes(p + 1, n);
        }
    }
}

void primeNumbers(int n) {
    printPrimes(2, n);
    printf("\n");
}
int main()
{
    int n = 100000 ;
    primeNumbers(n);
    return 0;
}
