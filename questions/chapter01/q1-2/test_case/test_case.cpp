#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Check Permutation", "[Permutation]" ) {
    REQUIRE( CheckPermutation("hello", "hello") ==  true);
    REQUIRE( CheckPermutation("hello", "wilson") == false );
    REQUIRE( CheckPermutation("hello123", "hello321") == true );
    REQUIRE( CheckPermutation("hello", "hello ") == false );
    REQUIRE( CheckPermutation("hello wilson", "olelhons ilw") == true );
}
