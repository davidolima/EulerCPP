/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

#include <bits/stdc++.h>

#define POSITION_DESIRED 10001

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
    std::vector<long> primesn;
    primesn.push_back(2);
    primesn.push_back(3);
    
    int i = 1;
    while (primesn.size() < POSITION_DESIRED){
        if (test_for_prime(i)){
            primesn.push_back(i);
        }
        i += 1;
    }

    for (int i = 0; i < primesn.size(); i++){
        std::cout << primesn[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
