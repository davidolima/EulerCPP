/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include <bits/stdc++.h>

#define LIMIT 2000000

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
    int i = LIMIT;
    std::vector<int> primesn;
    long sum = 0;
    while (i != 1){
        if (test_for_prime(i)){
            primesn.push_back(i);
        }
        i--;
    }
    primesn.push_back(3);
    primesn.push_back(2);
    
    for (int i = 0; i < primesn.size(); i++){
        std::cout << primesn[i] << " ";
        sum += primesn[i];
    }
    std::cout << "\n" << sum << "\n";
    return 0;
}
