/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <bits/stdc++.h>

#define LIMIT 600851475143

bool test_for_prime (int number){
    std::vector<long long> primes;
    primes.push_back(1);
    
    for (int i = 2; i <= sqrt(number); i++){
        if (number % i == 0){
            primes.clear();
            break;
        }
        if (primes.back() != i){
            primes.push_back(i);
        }
    }
    if (primes.size() > 1){
        return true;
    }
    return false;
}

int main (){
    for (long long i = 0; i < LIMIT; i++){
        if (test_for_prime(i) and LIMIT % i == 0){
            std::cout << i << "\n";
        }
    }
    return 0;
}
