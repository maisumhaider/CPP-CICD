//
// Created by USER on 01-Oct-18.
//
#include "catch.hpp"
#include "FizzBuzz.h"
#include <string>

TEST_CASE( "FizzBuzz Test", "[fizzbuzz]" ) {
REQUIRE( FizzBuzz(3) == "Fizz" );
REQUIRE( FizzBuzz(5) == "Buzz" );
REQUIRE( FizzBuzz(15) == "Fizz Buzz" );
REQUIRE( FizzBuzz(30) == "Fizz Buzz" );
REQUIRE( FizzBuzz(1) == "" );
}