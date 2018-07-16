#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Question03]" ) {
    REQUIRE( Answer("Mr John Smith     ", 13) == "Mr%20John%20Smith");
}
