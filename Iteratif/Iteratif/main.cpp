#include <bits/stdc++.h>
using namespace std;

void generateprime(int N){
    vector<int> primes;
    primes.push_back(2);
    int num = 3;
    while (primes.size() < N) {
        bool is_prime
            = true;
        for (int i = 0; i < primes.size(); i++) {
            if (num % primes[i]
                == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes.push_back(num);
        }
        num += 2;
    }

    for (int i = 0; i < primes.size();
         i++) {
        cout << primes[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n = 100000 ;
    generateprime(n);
    return 0;
}
