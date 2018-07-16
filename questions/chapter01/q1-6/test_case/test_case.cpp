#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Question06]" ) {
    REQUIRE( Answer("aabcccccaaa") == "a2b1c5a3");
}
