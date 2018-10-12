//
// Created by USER on 13-Oct-18.
//

#include <gtest/gtest.h>
#include "FizzBuzz.h"

TEST(FizzBuzz, 3) {
    EXPECT_EQ("Fizz", FizzBuzz(3));
}

TEST(FizzBuzz, 5) {
    EXPECT_EQ("Buzz", FizzBuzz(5));
}

TEST(FizzBuzz, 15) {
    EXPECT_EQ("FizzBuzz", FizzBuzz(15));
}