#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question01]" ) {
  SECTION("number"){
    LinkedList<char> input;
    input.appendNode(9);
    input.appendNode(3);
    input.appendNode(4);
    input.appendNode(3);
    input.appendNode(1);

    LinkedList<char> res;
    res.appendNode(9);
    res.appendNode(3);
    res.appendNode(4);
    res.appendNode(1);

    REQUIRE( RemoveDups(input) == res );
  }

  SECTION("charactor"){
    LinkedList<char> input;
    input.appendNode('c');
    input.appendNode('v');
    input.appendNode('a');
    input.appendNode('v');
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode('c');
    input.appendNode('c');

    LinkedList<char> res;
    res.appendNode('c');
    res.appendNode('a');
    res.appendNode('v');

    REQUIRE( RemoveDups(input) == res );
  }

  SECTION("mix"){
    LinkedList<char> input;
    input.appendNode('a');
    input.appendNode('a');
    input.appendNode(4);
    input.appendNode('a');
    input.appendNode(32);
    input.appendNode(23);
    input.appendNode('a');
    input.appendNode(4);
    input.appendNode(4);
    input.appendNode('1');
    input.appendNode(4);
    input.appendNode(23);
    input.appendNode(' ');
    input.appendNode('a');
    input.appendNode(4);
    input.appendNode('1');
    input.appendNode(23);
    input.appendNode('1');
    input.appendNode('1');
    input.appendNode('1');

    LinkedList<char> res;
    res.appendNode('a');
    res.appendNode(32);
    res.appendNode('1');
    res.appendNode(23);
    res.appendNode(4);
    res.appendNode(' ');

    REQUIRE( RemoveDups(input) == res );
  }

}
