//
// Created by USER on 13-Oct-18.
//

#include <iostream>
#include <string>
#include "FizzBuzz.h"

using std::string;

string FizzBuzz(int input) {
    string x = "";

    x = input % 3 == 0 && input % 5 == 0 ? "FizzBuzz" : input % 5 == 0 ? "Buzz" : input % 3 == 0 ? "Fizz" : "";

    return x;
}