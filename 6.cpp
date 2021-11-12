/*
The sum of the squares of the first ten natural numbers is,
                   1² + 2² + ... + 10² = 385

The square of the sum of the first ten natural numbers is,
                (1 + 2 + ... + 10)² = 55² = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
                    3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <bits/stdc++.h>

#define LIMIT 100

int sum_of_squares (int limit){
    int sum = 0;
    for (int i = 1; i <= limit; i++){
        sum += i*i;
    }
    return sum;
}

int square_of_sum (int limit){
    int sum = 0;
    for (int i = 1; i <= limit; i++){
        sum += i;
    }
    return sum*sum;
}

int main (){
    int diff_of_sum = square_of_sum(LIMIT) - sum_of_squares(LIMIT);
    std::cout << diff_of_sum;
    return 0;
}
