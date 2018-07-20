#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../answer.cpp"

TEST_CASE( "Coding test Chapter02", "[Question01]" ) {
  SECTION("int"){
    LinkedList<int> list;
    list.appendNode(9);
    list.appendNode(3);
    list.appendNode(4);
    list.appendNode(3);
    list.appendNode(1);

    LinkedList<int> res;
    res.appendNode(9);
    res.appendNode(3);
    res.appendNode(4);
    res.appendNode(1);

    list.Answer();

    REQUIRE( list == res );
  }

  SECTION("float"){
    LinkedList<float> list;
    list.appendNode(9.33);
    list.appendNode(3.123);
    list.appendNode(4.11);
    list.appendNode(4.21);
    list.appendNode(3.123);
    list.appendNode(2.99);

    LinkedList<float> res;
    res.appendNode(9.33);
    res.appendNode(3.123);
    res.appendNode(4.11);
    res.appendNode(4.21);
    res.appendNode(2.99);

    list.Answer();

    REQUIRE( list == res );
  }

  SECTION("char"){
    LinkedList<float> list;
    list.appendNode('c');
    list.appendNode('v');
    list.appendNode('a');
    list.appendNode('v');
    list.appendNode('a');
    list.appendNode('a');
    list.appendNode('a');
    list.appendNode('a');
    list.appendNode('a');
    list.appendNode('c');
    list.appendNode('c');

    LinkedList<float> res;
    res.appendNode('c');
    res.appendNode('a');
    res.appendNode('v');

    list.Answer();

    REQUIRE( list == res );
  }

  SECTION("mix"){
    LinkedList<char> list;
    list.appendNode('a');
    list.appendNode('a');
    list.appendNode(4);
    list.appendNode('a');
    list.appendNode(32);
    list.appendNode(23);
    list.appendNode('a');
    list.appendNode(4);
    list.appendNode(4);
    list.appendNode('1');
    list.appendNode(4);
    list.appendNode(23);
    list.appendNode(' ');
    list.appendNode('a');
    list.appendNode(4);
    list.appendNode('1');
    list.appendNode(23);
    list.appendNode('1');
    list.appendNode('1');
    list.appendNode('1');

    LinkedList<char> res;
    res.appendNode('a');
    res.appendNode(32);
    res.appendNode('1');
    res.appendNode(23);
    res.appendNode(4);
    res.appendNode(' ');

    list.Answer();

    REQUIRE( list == res );
  }

}
