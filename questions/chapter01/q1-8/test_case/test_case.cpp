#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

#include <vector>

using namespace std;

TEST_CASE( "Coding unit test", "[Question08]" ) {
  vector<int> v1{1,2,3,
                 4,0,6,
                 7,8,9};

  vector<int> v1_sol{1,0,3,
                     0,0,0,
                     7,0,9};

  REQUIRE( Answer(v1, 3, 3) == v1_sol);
}
