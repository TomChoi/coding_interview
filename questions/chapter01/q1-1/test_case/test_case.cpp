#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Function]" ) {
    REQUIRE( Answer("abcdef") == true );
    REQUIRE( Answer("hello") == false );
    REQUIRE( Answer("q12we34rt5") == true );
    REQUIRE( Answer("abcde1231") == false );
}
