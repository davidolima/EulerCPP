/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <bits/stdc++.h>

#define LIMIT 1000000000
#define DIVISION_LIMIT 20

int main(){
    std::array<bool,DIVISION_LIMIT> meta;
    std::array<bool,DIVISION_LIMIT> actual;
    for (int i = 1; i < LIMIT; i++){
        std::cout << "\r" << (float)i * 100 / LIMIT << "%";
        
        meta.fill(true);
        actual.fill(false);
        
        for (int j = 1; j <= DIVISION_LIMIT; j++){
            if (i % j == 0){
                actual[j-1] = true;
            }
        }
        if (actual == meta){
            std::cout << "\n" << i << "\n"; 
            break;
        }
    }
    return 0;
}
