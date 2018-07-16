#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Question03]" ) {
    REQUIRE( Answer("Mr John Smith     ", 13) == "Mr%20John%20Smith");
    REQUIRE( Answer("Mr John Smith     ", 15) == "Mr%20John%20Smith%20%20");
    REQUIRE( Answer("Mr John Smith", 10) == "Mr%20John%20Sm");
    REQUIRE( Answer("MrJohnSmith     ", 13) == "MrJohnSmith%20%20");
    REQUIRE( Answer("Hello Wilson  ", 13) == "Hello%20Wilson%20");
}
