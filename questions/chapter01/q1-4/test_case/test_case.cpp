#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding unit test", "[Question04]" ) {
  REQUIRE( Answer("tact coa") == true);
  REQUIRE( Answer("t a c t c o a") == true);
  REQUIRE( Answer("Tact Oa") == false);
  REQUIRE( Answer("Tact Coa") == true);
  REQUIRE( Answer("tacatca") == true);
  REQUIRE( Answer("hello") == false);
  REQUIRE( Answer("Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa \
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa \
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa \
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa
  Tact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact CoaTact Coa") == false);
}
