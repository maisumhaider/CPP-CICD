//
// Created by USER on 01-Oct-18.
//

#ifndef KAATA_FIZZBUZZ_FIZZBUZZ_H
#define KAATA_FIZZBUZZ_FIZZBUZZ_H

#include <iostream>
#include <string>

std::string FizzBuzz(int input) {
    std::string x;

    if (input % 3 == 0 && input % 5 == 0) {
            x =  "Fizz Buzz";
        }else if (input % 3 == 0) {
            x =  "Fizz";
        } else if (input % 5 == 0) {
            x =  "Buzz";
        } else {
            x =  "";
        }
        return x;
}

#endif //KAATA_FIZZBUZZ_FIZZBUZZ_H
