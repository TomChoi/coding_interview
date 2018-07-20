#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question03]" ) {
  SECTION("1"){
    LinkedList<char> input;
    input.appendNode('a');
    input.appendNode('b');
    input.appendNode('c');
    input.appendNode('d');
    input.appendNode('e');
    input.appendNode('f');

    LinkedList<char> res;
    res.appendNode('a');
    res.appendNode('b');
    res.appendNode('d');
    res.appendNode('e');
    res.appendNode('f');

    REQUIRE( DeleteMiddleNode(input) == res );
  }

  SECTION("2"){
    LinkedList<char> input;
    input.appendNode('a');
    input.appendNode('A');
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode('A');
    input.appendNode('a');

    LinkedList<char> res;
    res.appendNode('a');
    res.appendNode('A');
    res.appendNode('a');
    res.appendNode('A');
    res.appendNode('a');

    REQUIRE( DeleteMiddleNode(input) == res );
  }

  SECTION("3"){
    LinkedList<char> input;
    input.appendNode('a');

    LinkedList<char> res;
    res.appendNode('a');

    REQUIRE( DeleteMiddleNode(input) == res );
  }

  SECTION("4"){
    LinkedList<char> input;
    input.appendNode('a');
    input.appendNode('b');

    LinkedList<char> res;
    res.appendNode('a');
    res.appendNode('b');

    REQUIRE( DeleteMiddleNode(input) == res );
  }

  SECTION("5"){
    LinkedList<char> input;
    input.appendNode('1');
    input.appendNode('A');
    input.appendNode('a');
    input.appendNode(1);
    input.appendNode('A');
    input.appendNode(' ');

    LinkedList<char> res;
    res.appendNode('1');
    res.appendNode('A');
    res.appendNode(1);
    res.appendNode('A');
    res.appendNode(' ');

    REQUIRE( DeleteMiddleNode(input) == res );
  }
}
