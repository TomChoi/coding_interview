#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Question05]" ) {
    REQUIRE( Answer("pale", "ple") == true);
    REQUIRE( Answer("pales", "pale") == true);
    REQUIRE( Answer("pale", "bale") == true);
    REQUIRE( Answer("pale", "bake") == false);
    REQUIRE( Answer("ale" , "pale") == true);
    REQUIRE( Answer("anana", "anana") == true);
    REQUIRE( Answer("bnana", "anana") == true);
    REQUIRE( Answer("Bnana", "Banana") == true);
    REQUIRE( Answer("Hello Wilson", "Hell Wilson") == true);
    REQUIRE( Answer("Hello Wilson", "HellH Wilson") == true);
    REQUIRE( Answer("Hello Wilson", "HelloWilson") == true);
    REQUIRE( Answer("HelloWilson", "Hello Wilson") == true);
}
