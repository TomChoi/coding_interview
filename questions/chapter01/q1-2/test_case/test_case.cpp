#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "2Factorials are computed", "[factorial]" ) {
    REQUIRE( Answer(1) == 1 );
    REQUIRE( Answer(2) == 2 );
    REQUIRE( Answer(3) == 6 );
    REQUIRE( Answer(10) == 3628800 );
}
