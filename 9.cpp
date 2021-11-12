/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
                               a² + b² = c²

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include <bits/stdc++.h>

int main () {
    for (int c = 0; c <= 1000; c++){
        for (int b = 0; b < c; b++){
            for (int a = 0; a < b; a++){
                if (a*a + b*b == c*c){
                    if (a + b + c == 1000){
                        std::cout << "\n" << a << " + " << b << " + " << c << " = 1000\n";
                        std::cout << a << " * " << b << " * " << c << " = " << (long) (a*b*c) << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    std::cout << "[NOT FOUND]\n";
    return 1;
}
