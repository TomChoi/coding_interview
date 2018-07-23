#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question02]" ) {
  SECTION("1"){
    LinkedList<char> input;
    input.appendNode(1);
    input.appendNode(3);
    input.appendNode(2);

    LinkedList<char> res;
    res.appendNode(3);
    res.appendNode(2);

    REQUIRE( ReturnKthToLast(input, 2) == res);
  }

  SECTION("2"){
    LinkedList<char> input;
    input.appendNode(1);
    input.appendNode(2);
    input.appendNode(3);
    input.appendNode(3);
    input.appendNode(2);
    input.appendNode(3);
    input.appendNode(3);
    input.appendNode(2);

    LinkedList<char> res;
    res.appendNode(1);
    res.appendNode(2);
    res.appendNode(3);
    res.appendNode(3);
    res.appendNode(2);
    res.appendNode(3);
    res.appendNode(3);
    res.appendNode(2);

    REQUIRE( ReturnKthToLast(input, 1) == res);
  }

  SECTION("2"){
    LinkedList<char> input;
    input.appendNode(1);
    input.appendNode(2);
    input.appendNode(3);
    input.appendNode(3);
    input.appendNode(2);
    input.appendNode(3);
    input.appendNode(3);
    input.appendNode(2);

    LinkedList<char> res;
    res.appendNode(2);

    REQUIRE( ReturnKthToLast(input, 8) == res);
  }
}
