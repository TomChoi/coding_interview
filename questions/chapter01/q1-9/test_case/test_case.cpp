#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Question09]" ) {
    REQUIRE( Answer("waterbottle", "erbottlewat") == true );
    REQUIRE( Answer("waterbwottle", "erbwottlewat") == true );
    REQUIRE( Answer("Hello Wilson", "sonHello Wil") == true );
    REQUIRE( Answer("Hello Wilson", "sonHelloWil") == false );
}
