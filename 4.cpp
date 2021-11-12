/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <bits/stdc++.h>

bool check_palindrome (int number){
    std::string number_string = std::to_string(number);
    std::string number_inverse = number_string;
    
    bool is_palindrome = false;
    
    for (int l = number_string.length(); l >= 0; l--){
        number_inverse[l] = number_string[number_string.length() - l - 1];
    }

    if (number_string.compare(number_inverse) == false){
        is_palindrome = true;
    }
    return is_palindrome;
}

int main () {

    std::vector<int> palindromos;
    
    for (int i = 999; i > 100; i--){
        for (int j = 999; j > 100; j--){
            if (check_palindrome(i*j)){
                palindromos.push_back(i*j);
                break;
            }
        }
    }
    std::cout << *std::max_element(std::begin(palindromos),std::end(palindromos));
    return 0;
}
